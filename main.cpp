#include "mainwindow.h"

#include <QApplication>
#include <QDialog>
#include <QInputDialog>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Client client;

    MainWindow w(&client);
    w.setWindowTitle("Client");
    w.show();
    return a.exec();
}
