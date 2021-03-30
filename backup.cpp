#include "backup.h"

#include <QDirIterator>
#include <QFile>

Backup::Backup(QObject *parent) : QObject(parent)
{
    connect(&_timer, &QTimer::timeout, this, &Backup::save_slot, Qt::ConnectionType::DirectConnection);
}

void Backup::setTask(L_Task *task)
{
    _task = task;
}

void Backup::start()
{
    _timer.start(interval);
}

void Backup::stop()
{
    _timer.stop();
}

void Backup::save()
{
    assert(_task != nullptr);

    QFile file(QString(savePath) + saveFileName + "_" + QDateTime::currentDateTime().toString("yy-MM-dd-hh-mm-ss") + ".autosave");
    if (file.open(QFile::WriteOnly)) {
        auto data = QJsonDocument(_task->toJSON());
        file.write(data.toJson());
        file.close();
    }
}

void Backup::save_slot()
{
    assert(_task != nullptr);

    QDirIterator it(path, { QString(fileName) + QString::number(_number) + "*" });

    while (it.hasNext())
        QFile(it.next()).remove();

    QFile file(QString(path) + fileName + QString::number(_number) + "_" + QDateTime::currentDateTime().toString("yy-MM-dd-hh-mm-ss") + ".autosave");
    if (file.open(QFile::WriteOnly)) {
        auto data = QJsonDocument(_task->toJSON());
        file.write(data.toJson());
        file.close();
    }

    _number = (_number + 1) % 5;
}


