#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include <QFile>
#include <QSettings>
#include <QTextStream>
#include <QTimer>

#include "client.h"
#include "settingstools.h"

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT

public:
    explicit Dialog(Client* client, QWidget *parent = nullptr);
    ~Dialog();
private slots:
    void clientError(ClientError, const QString& text);
    void on_ConnectButton_clicked();
    void on_CloseButton_clicked();
private:
    void load();
    void save();

    void dataToGUI();
    void dataFromGUI();

    Ui::Dialog *ui;

    Client* client = nullptr;

    QSettings* settings;

    int port;

    QString server;

    int workplace;

    static constexpr char const* settingsPath = "settings.ini";
};

#endif // DIALOG_H
