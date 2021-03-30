#include "dialog.h"
#include "ui_dialog.h"

using namespace settingstools;

Dialog::Dialog(Client* client, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog),

    port(8000),
    server("127.0.0.1"),
    workplace(0)
{
    ui->setupUi(this);
    this->client = client;

    connect(client, SIGNAL(error(ClientError, const QString&)), this, SLOT(clientError(ClientError, const QString&)));

    load();
    dataToGUI();
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::clientError(ClientError error, const QString &text)
{
    ui->ConnectButton->setDisabled(false);
    if (error == ClientError::NoError) {
        QDialog::accept();
    }
    else {
        ui->ErrorText->show();
        ui->ErrorText->setText(text);
    }
}

void Dialog::load()
{
    settings = new QSettings(settingsPath, QSettings::Format::IniFormat, this);

    get_value(port,       settings);
    get_value(server,     settings);
    get_value(workplace,  settings);
}

void Dialog::save()
{
    set_value(port,       settings);
    set_value(server,     settings);
    set_value(workplace,  settings);
}

void Dialog::dataToGUI()
{
    ui->Port->setValue(port);
    ui->ServerIP->setText(server);
    ui->ID->setValue(workplace);
}

void Dialog::dataFromGUI()
{
    port = ui->Port->value();
    server = ui->ServerIP->text();
    workplace = ui->ID->value();
}

void Dialog::on_ConnectButton_clicked()
{
    dataFromGUI();
    ui->ConnectButton->setDisabled(true);
    ui->ErrorText->hide();

    client->connectTo(server, port, workplace);

    save();
}

void Dialog::on_CloseButton_clicked()
{
    QDialog::reject();
}
