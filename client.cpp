#include "client.h"

Client::Client(QObject *parent) : QObject(parent)
{
    m_client = new QTcpSocket(this);

    m_client->setSocketOption(QAbstractSocket::KeepAliveOption, 1);

    connect(m_client, SIGNAL(readyRead()), this, SLOT(readData_slot()));
    connect(m_client, SIGNAL(connected()), this, SLOT(connected_slot()));
    connect(m_client, SIGNAL(disconnected()), this, SLOT(disconnected_slot()));

    connect(m_client, SIGNAL(error(QAbstractSocket::SocketError)), this, SLOT(error_slot(QAbstractSocket::SocketError)));
}

void Client::connectTo(const QString &ip, int port, int workplace)
{
    m_client->connectToHost(ip, port);
    m_place = workplace;
}

void Client::disconnectFrom()
{
    m_client->disconnectFromHost();
}

void Client::readData_slot()
{
    auto data = m_client->readAll();

    auto doc = QJsonDocument::fromJson(data);
    if (!doc.isObject()) {
        sendStatusData("error", 1, "Incorrect data.");
        return;
    }
    auto obj = doc.object();

    try {
        auto title = ljson::jsonToValue<QString>(obj["title"]);

        if (title == "status") {
            auto status = ljson::jsonToValue<QString>(obj["status"]);
            if(status == "ok") {

            }
            if(status == "error") {
                switch (ljson::jsonToValue<int>(obj["code"])) {
                    case -1: {
                        auto text = ljson::jsonToValue<QString>(obj["text"]);
                        emit error(ClientError::UnknownCommand, text);
                        break;
                    }
                    case 1: {
                        auto text = ljson::jsonToValue<QString>(obj["text"]);
                        emit error(ClientError::IncorrectData, text);
                        break;
                    }
                }
            }
            return;
        }

        if(title == "accept"){
            auto data = ljson::jsonToValue<QString>(obj["data"]);
            error(ClientError::NoError, data);
            return;
        }
        if(title == "reject"){
            auto data = ljson::jsonToValue<QString>(obj["data"]);
            error(ClientError::PlaceIsAlreadyTaken, data);
            return;
        }
        if(title == "task"){
            auto data = ljson::jsonToValue<QJsonObject>(obj["data"]);
            taskUpdated(data);
            return;
        }
        if(title == "result"){
            auto data = ljson::jsonToValue<int>(obj["data"]);
            resultUpdated(data);
            return;
        }
        if(title == "work"){
            auto data = ljson::jsonToValue<int>(obj["data"]);
            workShowChanged(data);
            return;
        }
        sendStatusData("error", -1, "Unknown command.");
    }
    catch(std::invalid_argument& ex) {
        sendStatusData("error", 1, ex.what());
        qDebug() << ex.what();
    }
}

void Client::connected_slot()
{
    qDebug() << "Connected";
    sendData("place", static_cast<int>(m_place));
}

void Client::disconnected_slot()
{
    qDebug() << "Disconnected";
    emit error(ClientError::Disconnected, "Disconnected.");
    emit toAutonomic();
}

void Client::error_slot(QAbstractSocket::SocketError socketError)
{
    switch(socketError)
    {
        case QAbstractSocket::SocketError::ConnectionRefusedError:
            error(ClientError::ConnectionRefused, "Connection refused!");
        break;
        case QAbstractSocket::SocketError::HostNotFoundError:
            error(ClientError::HostNotFound, "Host not found!");
        break;
        case QAbstractSocket::SocketError::NetworkError:
            error(ClientError::NetworkError, "Network error!");
        break;
        default:
            error(ClientError::UnknownError, "Unknown error!");
        break;
    }
}

void Client::sendData(const QString &title, const QJsonValue &data)
{
    QJsonObject json;
    json.insert("title", title);
    json.insert("data", data);

    m_client->write(QJsonDocument(json).toJson());
    m_client->flush();
}

void Client::sendStatusData(const QString &status, int code, const QString &text)
{
    QJsonObject json;
    json.insert("title", "status");
    json.insert("status", status);
    json.insert("code", code);
    json.insert("text", text);

    m_client->write(QJsonDocument(json).toJson());
    m_client->flush();
}
