#ifndef BACKUP_H
#define BACKUP_H

#include <QObject>
#include <QTimer>

#include "l_task.h"

class Backup : public QObject
{
    Q_OBJECT
public:
    explicit Backup(QObject *parent = nullptr);
    void setTask(L_Task* task);

    void start();
    void stop();

    void save();

private slots:
    void save_slot();
private:
    int _number = 0;

    L_Task* _task;

    QTimer _timer;

    static constexpr int interval = 30000;
    static constexpr char path[] = "backups/";
    static constexpr char fileName[] = "save";

    static constexpr char savePath[] = "backups/";
    static constexpr char saveFileName[] = "save";
};

#endif // BACKUP_H
