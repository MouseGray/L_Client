/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dialog
{
public:
    QLabel *ErrorText;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *ConnectButton;
    QPushButton *CloseButton;
    QWidget *layoutWidget1;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *ServerIP;
    QLabel *label_2;
    QSpinBox *Port;
    QLabel *label_3;
    QSpinBox *ID;

    void setupUi(QDialog *Dialog)
    {
        if (Dialog->objectName().isEmpty())
            Dialog->setObjectName(QString::fromUtf8("Dialog"));
        Dialog->setWindowModality(Qt::ApplicationModal);
        Dialog->resize(320, 240);
        Dialog->setModal(true);
        ErrorText = new QLabel(Dialog);
        ErrorText->setObjectName(QString::fromUtf8("ErrorText"));
        ErrorText->setEnabled(false);
        ErrorText->setGeometry(QRect(10, 136, 301, 16));
        layoutWidget = new QWidget(Dialog);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(10, 201, 301, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        ConnectButton = new QPushButton(layoutWidget);
        ConnectButton->setObjectName(QString::fromUtf8("ConnectButton"));

        horizontalLayout->addWidget(ConnectButton);

        CloseButton = new QPushButton(layoutWidget);
        CloseButton->setObjectName(QString::fromUtf8("CloseButton"));

        horizontalLayout->addWidget(CloseButton);

        layoutWidget1 = new QWidget(Dialog);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(10, 56, 301, 74));
        formLayout = new QFormLayout(layoutWidget1);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        ServerIP = new QLineEdit(layoutWidget1);
        ServerIP->setObjectName(QString::fromUtf8("ServerIP"));
        ServerIP->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::FieldRole, ServerIP);

        label_2 = new QLabel(layoutWidget1);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        Port = new QSpinBox(layoutWidget1);
        Port->setObjectName(QString::fromUtf8("Port"));
        Port->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        Port->setButtonSymbols(QAbstractSpinBox::NoButtons);
        Port->setKeyboardTracking(false);
        Port->setMaximum(10000);

        formLayout->setWidget(1, QFormLayout::FieldRole, Port);

        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setAlignment(Qt::AlignCenter);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        ID = new QSpinBox(layoutWidget1);
        ID->setObjectName(QString::fromUtf8("ID"));
        ID->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        ID->setButtonSymbols(QAbstractSpinBox::NoButtons);
        ID->setMaximum(9);

        formLayout->setWidget(2, QFormLayout::FieldRole, ID);


        retranslateUi(Dialog);

        QMetaObject::connectSlotsByName(Dialog);
    } // setupUi

    void retranslateUi(QDialog *Dialog)
    {
        Dialog->setWindowTitle(QCoreApplication::translate("Dialog", "Connection", nullptr));
        ErrorText->setText(QString());
        ConnectButton->setText(QCoreApplication::translate("Dialog", "Connect", nullptr));
        CloseButton->setText(QCoreApplication::translate("Dialog", "Close", nullptr));
        label->setText(QCoreApplication::translate("Dialog", "Server IP:", nullptr));
        label_2->setText(QCoreApplication::translate("Dialog", "Port:", nullptr));
        label_3->setText(QCoreApplication::translate("Dialog", "Place:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Dialog: public Ui_Dialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
