#ifndef CLIENT_H
#define CLIENT_H

#include <QObject>
#include <QDataStream>
#include <QTcpSocket>

#include <QJsonDocument>
#include <QJsonObject>
#include <QTimer>

#include "l_json.h"

enum class ClientError
{
    NoError,

    ConnectionRefused,
    HostNotFound,
    NetworkError,
    UnknownError,

    PlaceIsAlreadyTaken,

    UnknownCommand,
    IncorrectData,

    Disconnected
};

class Client : public QObject
{
    Q_OBJECT
public:
    explicit Client(QObject *parent = nullptr);

    void connectTo(const QString& ip, int port, int workplace);
    void disconnectFrom();

    void sendData(const QString& title, const QJsonValue& data);
    void sendStatusData(const QString& status, int code, const QString& text = "");
signals:
    void taskUpdated(const QJsonObject&);
    void resultUpdated(int);
    void workShowChanged(bool);
    void toAutonomic();

    void error(ClientError, const QString& text);
public slots:
    void readData_slot();

    void connected_slot();
    void disconnected_slot();
    void error_slot(QAbstractSocket::SocketError);
private:
    unsigned int m_place = 0;

    QTcpSocket* m_client = nullptr;
};

#endif // CLIENT_H
