/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <l_canvas.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_2;
    QLabel *central_status_lb;
    QStackedWidget *central_stk;
    QWidget *start_pg;
    QVBoxLayout *verticalLayout_3;
    QSpacerItem *start_tspc;
    QLabel *start_message_ls;
    QPushButton *start_start_btn;
    QPushButton *start_continue_btn;
    QSpacerItem *start_bspc;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QToolButton *start_connect_btn;
    QToolButton *start_load_btn;
    QWidget *paint_pg;
    QGridLayout *gridLayout_3;
    QTextEdit *paint_task_te;
    QGridLayout *paint_main_glo;
    QPushButton *paint_main_send_btn;
    QStackedWidget *paint_main_tool_stk;
    QWidget *paint_main_tool_create_lo;
    QVBoxLayout *verticalLayout_5;
    QToolButton *paint_main_tool_create_point_btn;
    QToolButton *paint_main_tool_create_line_btn;
    QToolButton *paint_main_tool_create_triangle_btn;
    QToolButton *paint_main_tool_create_rect_btn;
    QToolButton *paint_main_tool_create_ellipse_btn;
    QWidget *paint_main_tool_update_lo;
    QGridLayout *gridLayout;
    QToolButton *paint_main_tool_update_up_btn;
    QToolButton *paint_main_tool_update_previous_btn;
    QToolButton *paint_main_tool_update_uwidth_btn;
    QToolButton *paint_main_tool_update_uheight_btn;
    QToolButton *paint_main_tool_update_delete_btn;
    QToolButton *paint_main_tool_update_next_btn;
    QToolButton *paint_main_tool_update_lrotate_btn;
    QToolButton *paint_main_tool_update_right_btn;
    QToolButton *paint_main_tool_update_dheight_btn;
    QToolButton *paint_main_tool_update_down_btn;
    QToolButton *paint_main_tool_update_left_btn;
    QToolButton *paint_main_tool_update_dwidth_btn;
    QToolButton *paint_main_tool_update_rrotate_btn;
    QToolButton *paint_main_tool_update_fill_btn;
    QWidget *paint_main_tool_palette;
    QGridLayout *gridLayout_2;
    QToolButton *paint_main_tool_palette_yellow_btn;
    QToolButton *paint_main_tool_palette_red_btn;
    QToolButton *paint_main_tool_palette_green_btn;
    QToolButton *paint_main_tool_palette_black_btn;
    QToolButton *paint_main_tool_palette_white_btn;
    QToolButton *paint_main_tool_palette_gray_btn;
    QToolButton *paint_main_tool_palette_pink_btn;
    QToolButton *paint_main_tool_palette_brown_btn;
    QToolButton *paint_main_tool_palette_blue_btn;
    QSpacerItem *paint_main_tool_palette_spc;
    QPushButton *paint_main_tool_palette_back_btn;
    L_Canvas *paint_main_cnv;
    QLabel *paint_main_data_lb;
    QLabel *paint_main_object_lb;
    QSpacerItem *verticalSpacer;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush1(QColor(227, 255, 227, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        MainWindow->setPalette(palette);
        MainWindow->setLayoutDirection(Qt::LeftToRight);
        MainWindow->setToolButtonStyle(Qt::ToolButtonTextOnly);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout_2 = new QVBoxLayout(centralwidget);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        central_status_lb = new QLabel(centralwidget);
        central_status_lb->setObjectName(QString::fromUtf8("central_status_lb"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(central_status_lb->sizePolicy().hasHeightForWidth());
        central_status_lb->setSizePolicy(sizePolicy);
        central_status_lb->setMinimumSize(QSize(0, 20));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush2(QColor(255, 57, 60, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush2);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush2);
        central_status_lb->setPalette(palette1);
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        central_status_lb->setFont(font);
        central_status_lb->setAutoFillBackground(true);
        central_status_lb->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(central_status_lb);

        central_stk = new QStackedWidget(centralwidget);
        central_stk->setObjectName(QString::fromUtf8("central_stk"));
        start_pg = new QWidget();
        start_pg->setObjectName(QString::fromUtf8("start_pg"));
        verticalLayout_3 = new QVBoxLayout(start_pg);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        start_tspc = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(start_tspc);

        start_message_ls = new QLabel(start_pg);
        start_message_ls->setObjectName(QString::fromUtf8("start_message_ls"));
        QFont font1;
        font1.setPointSize(36);
        start_message_ls->setFont(font1);
        start_message_ls->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(start_message_ls);

        start_start_btn = new QPushButton(start_pg);
        start_start_btn->setObjectName(QString::fromUtf8("start_start_btn"));
        start_start_btn->setEnabled(true);
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(start_start_btn->sizePolicy().hasHeightForWidth());
        start_start_btn->setSizePolicy(sizePolicy1);
        start_start_btn->setBaseSize(QSize(0, 0));
        start_start_btn->setFont(font1);
        start_start_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(170, 255, 0);\n"
"}"));
        start_start_btn->setFlat(false);

        verticalLayout_3->addWidget(start_start_btn);

        start_continue_btn = new QPushButton(start_pg);
        start_continue_btn->setObjectName(QString::fromUtf8("start_continue_btn"));
        start_continue_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));

        verticalLayout_3->addWidget(start_continue_btn);

        start_bspc = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_3->addItem(start_bspc);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        start_connect_btn = new QToolButton(start_pg);
        start_connect_btn->setObjectName(QString::fromUtf8("start_connect_btn"));
        start_connect_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));

        horizontalLayout->addWidget(start_connect_btn);

        start_load_btn = new QToolButton(start_pg);
        start_load_btn->setObjectName(QString::fromUtf8("start_load_btn"));
        start_load_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        start_load_btn->setToolButtonStyle(Qt::ToolButtonTextOnly);

        horizontalLayout->addWidget(start_load_btn, 0, Qt::AlignRight);


        verticalLayout_3->addLayout(horizontalLayout);

        central_stk->addWidget(start_pg);
        paint_pg = new QWidget();
        paint_pg->setObjectName(QString::fromUtf8("paint_pg"));
        gridLayout_3 = new QGridLayout(paint_pg);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        paint_task_te = new QTextEdit(paint_pg);
        paint_task_te->setObjectName(QString::fromUtf8("paint_task_te"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Maximum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(paint_task_te->sizePolicy().hasHeightForWidth());
        paint_task_te->setSizePolicy(sizePolicy2);
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush1);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        paint_task_te->setPalette(palette2);
        QFont font2;
        font2.setPointSize(12);
        paint_task_te->setFont(font2);
        paint_task_te->setReadOnly(true);

        gridLayout_3->addWidget(paint_task_te, 0, 0, 1, 1);

        paint_main_glo = new QGridLayout();
        paint_main_glo->setObjectName(QString::fromUtf8("paint_main_glo"));
        paint_main_send_btn = new QPushButton(paint_pg);
        paint_main_send_btn->setObjectName(QString::fromUtf8("paint_main_send_btn"));
        QFont font3;
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setWeight(75);
        paint_main_send_btn->setFont(font3);
        paint_main_send_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color:rgb(0, 255, 127);\n"
"}"));

        paint_main_glo->addWidget(paint_main_send_btn, 4, 1, 1, 1);

        paint_main_tool_stk = new QStackedWidget(paint_pg);
        paint_main_tool_stk->setObjectName(QString::fromUtf8("paint_main_tool_stk"));
        QSizePolicy sizePolicy3(QSizePolicy::Maximum, QSizePolicy::Maximum);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(paint_main_tool_stk->sizePolicy().hasHeightForWidth());
        paint_main_tool_stk->setSizePolicy(sizePolicy3);
        paint_main_tool_create_lo = new QWidget();
        paint_main_tool_create_lo->setObjectName(QString::fromUtf8("paint_main_tool_create_lo"));
        verticalLayout_5 = new QVBoxLayout(paint_main_tool_create_lo);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        paint_main_tool_create_point_btn = new QToolButton(paint_main_tool_create_lo);
        paint_main_tool_create_point_btn->setObjectName(QString::fromUtf8("paint_main_tool_create_point_btn"));
        QSizePolicy sizePolicy4(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(paint_main_tool_create_point_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_create_point_btn->setSizePolicy(sizePolicy4);
        QFont font4;
        font4.setPointSize(10);
        paint_main_tool_create_point_btn->setFont(font4);
        paint_main_tool_create_point_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("L-Images/Point.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_create_point_btn->setIcon(icon);
        paint_main_tool_create_point_btn->setIconSize(QSize(32, 32));
        paint_main_tool_create_point_btn->setCheckable(false);
        paint_main_tool_create_point_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_5->addWidget(paint_main_tool_create_point_btn);

        paint_main_tool_create_line_btn = new QToolButton(paint_main_tool_create_lo);
        paint_main_tool_create_line_btn->setObjectName(QString::fromUtf8("paint_main_tool_create_line_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_create_line_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_create_line_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_create_line_btn->setFont(font4);
        paint_main_tool_create_line_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("L-Images/Line.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_create_line_btn->setIcon(icon1);
        paint_main_tool_create_line_btn->setIconSize(QSize(32, 32));
        paint_main_tool_create_line_btn->setCheckable(false);
        paint_main_tool_create_line_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_5->addWidget(paint_main_tool_create_line_btn);

        paint_main_tool_create_triangle_btn = new QToolButton(paint_main_tool_create_lo);
        paint_main_tool_create_triangle_btn->setObjectName(QString::fromUtf8("paint_main_tool_create_triangle_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_create_triangle_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_create_triangle_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_create_triangle_btn->setFont(font4);
        paint_main_tool_create_triangle_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("L-Images/Triangle.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_create_triangle_btn->setIcon(icon2);
        paint_main_tool_create_triangle_btn->setIconSize(QSize(32, 32));
        paint_main_tool_create_triangle_btn->setCheckable(false);
        paint_main_tool_create_triangle_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_5->addWidget(paint_main_tool_create_triangle_btn);

        paint_main_tool_create_rect_btn = new QToolButton(paint_main_tool_create_lo);
        paint_main_tool_create_rect_btn->setObjectName(QString::fromUtf8("paint_main_tool_create_rect_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_create_rect_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_create_rect_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_create_rect_btn->setFont(font4);
        paint_main_tool_create_rect_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("L-Images/Rect.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_create_rect_btn->setIcon(icon3);
        paint_main_tool_create_rect_btn->setIconSize(QSize(32, 32));
        paint_main_tool_create_rect_btn->setCheckable(false);
        paint_main_tool_create_rect_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_5->addWidget(paint_main_tool_create_rect_btn);

        paint_main_tool_create_ellipse_btn = new QToolButton(paint_main_tool_create_lo);
        paint_main_tool_create_ellipse_btn->setObjectName(QString::fromUtf8("paint_main_tool_create_ellipse_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_create_ellipse_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_create_ellipse_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_create_ellipse_btn->setFont(font4);
        paint_main_tool_create_ellipse_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("L-Images/Ellipse.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_create_ellipse_btn->setIcon(icon4);
        paint_main_tool_create_ellipse_btn->setIconSize(QSize(32, 32));
        paint_main_tool_create_ellipse_btn->setCheckable(false);
        paint_main_tool_create_ellipse_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        verticalLayout_5->addWidget(paint_main_tool_create_ellipse_btn);

        paint_main_tool_stk->addWidget(paint_main_tool_create_lo);
        paint_main_tool_update_lo = new QWidget();
        paint_main_tool_update_lo->setObjectName(QString::fromUtf8("paint_main_tool_update_lo"));
        gridLayout = new QGridLayout(paint_main_tool_update_lo);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        paint_main_tool_update_up_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_up_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_up_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_up_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_up_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_up_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("L-Images/MoveUpArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_up_btn->setIcon(icon5);
        paint_main_tool_update_up_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_up_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_up_btn, 0, 1, 1, 1);

        paint_main_tool_update_previous_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_previous_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_previous_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_previous_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_previous_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_previous_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8(":/new/images/L-Images/PreviousArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_previous_btn->setIcon(icon6);
        paint_main_tool_update_previous_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_previous_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        paint_main_tool_update_previous_btn->setAutoRaise(false);

        gridLayout->addWidget(paint_main_tool_update_previous_btn, 4, 0, 1, 1);

        paint_main_tool_update_uwidth_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_uwidth_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_uwidth_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_uwidth_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_uwidth_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_uwidth_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8(":/new/images/L-Images/ScaleWidthUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_uwidth_btn->setIcon(icon7);
        paint_main_tool_update_uwidth_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_uwidth_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_uwidth_btn, 3, 0, 1, 1);

        paint_main_tool_update_uheight_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_uheight_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_uheight_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_uheight_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_uheight_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_uheight_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon8;
        icon8.addFile(QString::fromUtf8(":/new/images/L-Images/ScaleHeightUp.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_uheight_btn->setIcon(icon8);
        paint_main_tool_update_uheight_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_uheight_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_uheight_btn, 3, 2, 1, 1);

        paint_main_tool_update_delete_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_delete_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_delete_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_delete_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_delete_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_delete_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon9;
        icon9.addFile(QString::fromUtf8(":/new/images/L-Images/Remove.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_delete_btn->setIcon(icon9);
        paint_main_tool_update_delete_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_delete_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_delete_btn, 3, 1, 1, 1);

        paint_main_tool_update_next_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_next_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_next_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_next_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_next_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_next_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon10;
        icon10.addFile(QString::fromUtf8(":/new/images/L-Images/NextArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_next_btn->setIcon(icon10);
        paint_main_tool_update_next_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_next_btn->setAutoRepeat(false);
        paint_main_tool_update_next_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_next_btn, 4, 2, 1, 1);

        paint_main_tool_update_lrotate_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_lrotate_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_lrotate_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_lrotate_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_lrotate_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_lrotate_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon11;
        icon11.addFile(QString::fromUtf8(":/new/images/L-Images/RotateLeftArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_lrotate_btn->setIcon(icon11);
        paint_main_tool_update_lrotate_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_lrotate_btn->setPopupMode(QToolButton::DelayedPopup);
        paint_main_tool_update_lrotate_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);
        paint_main_tool_update_lrotate_btn->setAutoRaise(false);

        gridLayout->addWidget(paint_main_tool_update_lrotate_btn, 0, 2, 1, 1);

        paint_main_tool_update_right_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_right_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_right_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_right_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_right_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_right_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon12;
        icon12.addFile(QString::fromUtf8("L-Images/MoveRightArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_right_btn->setIcon(icon12);
        paint_main_tool_update_right_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_right_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_right_btn, 1, 2, 1, 1);

        paint_main_tool_update_dheight_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_dheight_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_dheight_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_dheight_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_dheight_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_dheight_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon13;
        icon13.addFile(QString::fromUtf8(":/new/images/L-Images/ScaleHeightDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_dheight_btn->setIcon(icon13);
        paint_main_tool_update_dheight_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_dheight_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_dheight_btn, 2, 2, 1, 1);

        paint_main_tool_update_down_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_down_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_down_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_down_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_down_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_down_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon14;
        icon14.addFile(QString::fromUtf8("L-Images/MoveDownArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_down_btn->setIcon(icon14);
        paint_main_tool_update_down_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_down_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_down_btn, 2, 1, 1, 1);

        paint_main_tool_update_left_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_left_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_left_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_left_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_left_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_left_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon15;
        icon15.addFile(QString::fromUtf8("L-Images/MoveLeftArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_left_btn->setIcon(icon15);
        paint_main_tool_update_left_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_left_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_left_btn, 1, 0, 1, 1);

        paint_main_tool_update_dwidth_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_dwidth_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_dwidth_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_dwidth_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_dwidth_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_dwidth_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon16;
        icon16.addFile(QString::fromUtf8(":/new/images/L-Images/ScaleWidthDown.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_dwidth_btn->setIcon(icon16);
        paint_main_tool_update_dwidth_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_dwidth_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_dwidth_btn, 2, 0, 1, 1);

        paint_main_tool_update_rrotate_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_rrotate_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_rrotate_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_rrotate_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_rrotate_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_rrotate_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon17;
        icon17.addFile(QString::fromUtf8(":/new/images/L-Images/RotateRightArrow.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_rrotate_btn->setIcon(icon17);
        paint_main_tool_update_rrotate_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_rrotate_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_rrotate_btn, 0, 0, 1, 1);

        paint_main_tool_update_fill_btn = new QToolButton(paint_main_tool_update_lo);
        paint_main_tool_update_fill_btn->setObjectName(QString::fromUtf8("paint_main_tool_update_fill_btn"));
        sizePolicy4.setHeightForWidth(paint_main_tool_update_fill_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_update_fill_btn->setSizePolicy(sizePolicy4);
        paint_main_tool_update_fill_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon18;
        icon18.addFile(QString::fromUtf8(":/new/images/L-Images/Paint.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_update_fill_btn->setIcon(icon18);
        paint_main_tool_update_fill_btn->setIconSize(QSize(24, 24));
        paint_main_tool_update_fill_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout->addWidget(paint_main_tool_update_fill_btn, 1, 1, 1, 1);

        paint_main_tool_stk->addWidget(paint_main_tool_update_lo);
        paint_main_tool_palette = new QWidget();
        paint_main_tool_palette->setObjectName(QString::fromUtf8("paint_main_tool_palette"));
        gridLayout_2 = new QGridLayout(paint_main_tool_palette);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        paint_main_tool_palette_yellow_btn = new QToolButton(paint_main_tool_palette);
        paint_main_tool_palette_yellow_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_yellow_btn"));
        sizePolicy.setHeightForWidth(paint_main_tool_palette_yellow_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_palette_yellow_btn->setSizePolicy(sizePolicy);
        paint_main_tool_palette_yellow_btn->setMinimumSize(QSize(0, 67));
        paint_main_tool_palette_yellow_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon19;
        icon19.addFile(QString::fromUtf8("L-Images/Yellow.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_palette_yellow_btn->setIcon(icon19);
        paint_main_tool_palette_yellow_btn->setIconSize(QSize(32, 32));
        paint_main_tool_palette_yellow_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(paint_main_tool_palette_yellow_btn, 1, 4, 1, 1);

        paint_main_tool_palette_red_btn = new QToolButton(paint_main_tool_palette);
        paint_main_tool_palette_red_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_red_btn"));
        sizePolicy.setHeightForWidth(paint_main_tool_palette_red_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_palette_red_btn->setSizePolicy(sizePolicy);
        paint_main_tool_palette_red_btn->setMinimumSize(QSize(0, 67));
        paint_main_tool_palette_red_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon20;
        icon20.addFile(QString::fromUtf8("L-Images/Red.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_palette_red_btn->setIcon(icon20);
        paint_main_tool_palette_red_btn->setIconSize(QSize(32, 32));
        paint_main_tool_palette_red_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(paint_main_tool_palette_red_btn, 1, 2, 1, 1);

        paint_main_tool_palette_green_btn = new QToolButton(paint_main_tool_palette);
        paint_main_tool_palette_green_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_green_btn"));
        sizePolicy.setHeightForWidth(paint_main_tool_palette_green_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_palette_green_btn->setSizePolicy(sizePolicy);
        paint_main_tool_palette_green_btn->setMinimumSize(QSize(0, 67));
        paint_main_tool_palette_green_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon21;
        icon21.addFile(QString::fromUtf8("L-Images/Green.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_palette_green_btn->setIcon(icon21);
        paint_main_tool_palette_green_btn->setIconSize(QSize(32, 32));
        paint_main_tool_palette_green_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(paint_main_tool_palette_green_btn, 1, 3, 1, 1);

        paint_main_tool_palette_black_btn = new QToolButton(paint_main_tool_palette);
        paint_main_tool_palette_black_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_black_btn"));
        sizePolicy.setHeightForWidth(paint_main_tool_palette_black_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_palette_black_btn->setSizePolicy(sizePolicy);
        paint_main_tool_palette_black_btn->setMinimumSize(QSize(0, 67));
        paint_main_tool_palette_black_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon22;
        icon22.addFile(QString::fromUtf8("L-Images/Black.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_palette_black_btn->setIcon(icon22);
        paint_main_tool_palette_black_btn->setIconSize(QSize(32, 32));
        paint_main_tool_palette_black_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(paint_main_tool_palette_black_btn, 1, 1, 1, 1);

        paint_main_tool_palette_white_btn = new QToolButton(paint_main_tool_palette);
        paint_main_tool_palette_white_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_white_btn"));
        sizePolicy.setHeightForWidth(paint_main_tool_palette_white_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_palette_white_btn->setSizePolicy(sizePolicy);
        paint_main_tool_palette_white_btn->setMinimumSize(QSize(0, 67));
        QPalette palette3;
        QBrush brush3(QColor(170, 255, 127, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush3);
        paint_main_tool_palette_white_btn->setPalette(palette3);
        paint_main_tool_palette_white_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon23;
        icon23.addFile(QString::fromUtf8("L-Images/White.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_palette_white_btn->setIcon(icon23);
        paint_main_tool_palette_white_btn->setIconSize(QSize(32, 32));
        paint_main_tool_palette_white_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(paint_main_tool_palette_white_btn, 1, 0, 1, 1);

        paint_main_tool_palette_gray_btn = new QToolButton(paint_main_tool_palette);
        paint_main_tool_palette_gray_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_gray_btn"));
        sizePolicy.setHeightForWidth(paint_main_tool_palette_gray_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_palette_gray_btn->setSizePolicy(sizePolicy);
        paint_main_tool_palette_gray_btn->setMinimumSize(QSize(0, 67));
        paint_main_tool_palette_gray_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon24;
        icon24.addFile(QString::fromUtf8("L-Images/Gray.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_palette_gray_btn->setIcon(icon24);
        paint_main_tool_palette_gray_btn->setIconSize(QSize(32, 32));
        paint_main_tool_palette_gray_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(paint_main_tool_palette_gray_btn, 2, 2, 1, 1);

        paint_main_tool_palette_pink_btn = new QToolButton(paint_main_tool_palette);
        paint_main_tool_palette_pink_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_pink_btn"));
        sizePolicy.setHeightForWidth(paint_main_tool_palette_pink_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_palette_pink_btn->setSizePolicy(sizePolicy);
        paint_main_tool_palette_pink_btn->setMinimumSize(QSize(0, 67));
        paint_main_tool_palette_pink_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon25;
        icon25.addFile(QString::fromUtf8("L-Images/Pink.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_palette_pink_btn->setIcon(icon25);
        paint_main_tool_palette_pink_btn->setIconSize(QSize(32, 32));
        paint_main_tool_palette_pink_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(paint_main_tool_palette_pink_btn, 2, 3, 1, 1);

        paint_main_tool_palette_brown_btn = new QToolButton(paint_main_tool_palette);
        paint_main_tool_palette_brown_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_brown_btn"));
        sizePolicy.setHeightForWidth(paint_main_tool_palette_brown_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_palette_brown_btn->setSizePolicy(sizePolicy);
        paint_main_tool_palette_brown_btn->setMinimumSize(QSize(0, 67));
        paint_main_tool_palette_brown_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon26;
        icon26.addFile(QString::fromUtf8("L-Images/Brown.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_palette_brown_btn->setIcon(icon26);
        paint_main_tool_palette_brown_btn->setIconSize(QSize(32, 32));
        paint_main_tool_palette_brown_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(paint_main_tool_palette_brown_btn, 2, 1, 1, 1);

        paint_main_tool_palette_blue_btn = new QToolButton(paint_main_tool_palette);
        paint_main_tool_palette_blue_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_blue_btn"));
        sizePolicy.setHeightForWidth(paint_main_tool_palette_blue_btn->sizePolicy().hasHeightForWidth());
        paint_main_tool_palette_blue_btn->setSizePolicy(sizePolicy);
        paint_main_tool_palette_blue_btn->setMinimumSize(QSize(0, 67));
        paint_main_tool_palette_blue_btn->setStyleSheet(QString::fromUtf8("QToolButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));
        QIcon icon27;
        icon27.addFile(QString::fromUtf8("L-Images/Blue.png"), QSize(), QIcon::Normal, QIcon::Off);
        paint_main_tool_palette_blue_btn->setIcon(icon27);
        paint_main_tool_palette_blue_btn->setIconSize(QSize(32, 32));
        paint_main_tool_palette_blue_btn->setToolButtonStyle(Qt::ToolButtonTextUnderIcon);

        gridLayout_2->addWidget(paint_main_tool_palette_blue_btn, 2, 0, 1, 1);

        paint_main_tool_palette_spc = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(paint_main_tool_palette_spc, 3, 2, 1, 1);

        paint_main_tool_palette_back_btn = new QPushButton(paint_main_tool_palette);
        paint_main_tool_palette_back_btn->setObjectName(QString::fromUtf8("paint_main_tool_palette_back_btn"));
        paint_main_tool_palette_back_btn->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"	background-color: rgb(170, 255, 127);\n"
"}"));

        gridLayout_2->addWidget(paint_main_tool_palette_back_btn, 0, 0, 1, 5);

        paint_main_tool_stk->addWidget(paint_main_tool_palette);

        paint_main_glo->addWidget(paint_main_tool_stk, 0, 1, 3, 1);

        paint_main_cnv = new L_Canvas(paint_pg);
        paint_main_cnv->setObjectName(QString::fromUtf8("paint_main_cnv"));
        sizePolicy4.setHeightForWidth(paint_main_cnv->sizePolicy().hasHeightForWidth());
        paint_main_cnv->setSizePolicy(sizePolicy4);

        paint_main_glo->addWidget(paint_main_cnv, 2, 0, 3, 1);

        paint_main_data_lb = new QLabel(paint_pg);
        paint_main_data_lb->setObjectName(QString::fromUtf8("paint_main_data_lb"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Maximum);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(paint_main_data_lb->sizePolicy().hasHeightForWidth());
        paint_main_data_lb->setSizePolicy(sizePolicy5);
        paint_main_data_lb->setFont(font2);

        paint_main_glo->addWidget(paint_main_data_lb, 0, 0, 1, 1);

        paint_main_object_lb = new QLabel(paint_pg);
        paint_main_object_lb->setObjectName(QString::fromUtf8("paint_main_object_lb"));
        sizePolicy5.setHeightForWidth(paint_main_object_lb->sizePolicy().hasHeightForWidth());
        paint_main_object_lb->setSizePolicy(sizePolicy5);
        paint_main_object_lb->setFont(font2);

        paint_main_glo->addWidget(paint_main_object_lb, 1, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        paint_main_glo->addItem(verticalSpacer, 3, 1, 1, 1);


        gridLayout_3->addLayout(paint_main_glo, 1, 0, 1, 1);

        central_stk->addWidget(paint_pg);

        verticalLayout_2->addWidget(central_stk);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 19));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        central_stk->setCurrentIndex(0);
        paint_main_tool_stk->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        central_status_lb->setText(QCoreApplication::translate("MainWindow", "\320\220\320\262\321\202\320\276\320\275\320\276\320\274\320\275\321\213\320\271 \321\200\320\265\320\266\320\270\320\274", nullptr));
        start_message_ls->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\264\320\260\320\275\320\270\320\271 \320\275\320\265\321\202", nullptr));
        start_start_btn->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
        start_continue_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\264\320\276\320\273\320\266\320\270\321\202\321\214", nullptr));
        start_connect_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
        start_load_btn->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214", nullptr));
        paint_main_send_btn->setText(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\277\321\200\320\260\320\262\320\270\321\202\321\214", nullptr));
        paint_main_tool_create_point_btn->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\321\207\320\272\320\260", nullptr));
        paint_main_tool_create_line_btn->setText(QCoreApplication::translate("MainWindow", "\320\233\320\270\320\275\320\270\321\217", nullptr));
        paint_main_tool_create_triangle_btn->setText(QCoreApplication::translate("MainWindow", "\320\242\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        paint_main_tool_create_rect_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        paint_main_tool_create_ellipse_btn->setText(QCoreApplication::translate("MainWindow", "\320\236\320\262\320\260\320\273", nullptr));
        paint_main_tool_update_up_btn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\262\320\270\320\275\321\203\321\202\321\214\n"
"\320\262\320\262\320\265\321\200\321\205", nullptr));
        paint_main_tool_update_previous_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\265\320\264\321\213\320\264\321\203\321\211\320\270\320\271", nullptr));
        paint_main_tool_update_uwidth_btn->setText(QCoreApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214\n"
"\321\210\320\270\321\200\320\270\320\275\321\203", nullptr));
        paint_main_tool_update_uheight_btn->setText(QCoreApplication::translate("MainWindow", "\320\243\320\262\320\265\320\273\320\270\321\207\320\270\321\202\321\214\n"
"\320\262\321\213\321\201\320\276\321\202\321\203", nullptr));
        paint_main_tool_update_delete_btn->setText(QCoreApplication::translate("MainWindow", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        paint_main_tool_update_next_btn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\273\320\265\320\264\321\203\321\216\321\211\320\270\320\271", nullptr));
        paint_main_tool_update_lrotate_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214 \320\277\321\200\320\276\321\202\320\270\320\262\n"
"\321\207\320\260\321\201\320\276\320\262\320\276\320\271", nullptr));
        paint_main_tool_update_right_btn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\262\320\270\320\275\321\203\321\202\321\214\n"
"\320\262\320\277\321\200\320\260\320\262\320\276", nullptr));
        paint_main_tool_update_dheight_btn->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214\n"
"\320\262\321\213\321\201\320\276\321\202\321\203", nullptr));
        paint_main_tool_update_down_btn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\262\320\270\320\275\321\203\321\202\321\214\n"
"\320\262\320\275\320\270\320\267", nullptr));
        paint_main_tool_update_left_btn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\262\320\270\320\275\321\203\321\202\321\214\n"
"\320\262\320\273\320\265\320\262\320\276", nullptr));
        paint_main_tool_update_dwidth_btn->setText(QCoreApplication::translate("MainWindow", "\320\243\320\274\320\265\320\275\321\214\321\210\320\270\321\202\321\214\n"
"\321\210\320\270\321\200\320\270\320\275\321\203", nullptr));
        paint_main_tool_update_rrotate_btn->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\265\321\200\320\275\321\203\321\202\321\214 \320\277\320\276\n"
"\321\207\320\260\321\201\320\276\320\262\320\276\320\271", nullptr));
        paint_main_tool_update_fill_btn->setText(QCoreApplication::translate("MainWindow", "\320\240\320\260\321\201\320\272\321\200\320\260\321\201\320\270\321\202\321\214", nullptr));
        paint_main_tool_palette_yellow_btn->setText(QCoreApplication::translate("MainWindow", "\320\226\320\265\320\273\321\202\321\213\320\271", nullptr));
        paint_main_tool_palette_red_btn->setText(QCoreApplication::translate("MainWindow", "\320\232\321\200\320\260\321\201\320\275\321\213\320\271", nullptr));
        paint_main_tool_palette_green_btn->setText(QCoreApplication::translate("MainWindow", "\320\227\320\265\320\273\320\265\320\275\321\213\320\271", nullptr));
        paint_main_tool_palette_black_btn->setText(QCoreApplication::translate("MainWindow", "\320\247\320\265\321\200\320\275\321\213\320\271", nullptr));
        paint_main_tool_palette_white_btn->setText(QCoreApplication::translate("MainWindow", "\320\221\320\265\320\273\321\213\320\271", nullptr));
        paint_main_tool_palette_gray_btn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\265\321\200\321\213\320\271", nullptr));
        paint_main_tool_palette_pink_btn->setText(QCoreApplication::translate("MainWindow", "\320\240\320\276\320\267\320\276\320\262\321\213\320\271", nullptr));
        paint_main_tool_palette_brown_btn->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\321\200\320\270\321\207\320\275\320\265\320\262\321\213\320\271", nullptr));
        paint_main_tool_palette_blue_btn->setText(QCoreApplication::translate("MainWindow", "\320\241\320\270\320\275\320\270\320\271", nullptr));
        paint_main_tool_palette_back_btn->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        paint_main_data_lb->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        paint_main_object_lb->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
