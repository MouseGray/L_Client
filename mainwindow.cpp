#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QFileDialog>
#include <QMessageBox>

MainWindow::MainWindow(Client *client, QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    ui->start_start_btn->hide();
    ui->start_continue_btn->hide();
    ui->central_status_lb->hide();

    this->client = client;
    connect(client, SIGNAL(taskUpdated(const QJsonObject&)), this, SLOT(taskUpdated_slot(const QJsonObject&)));
    connect(client, SIGNAL(resultUpdated(int)), this, SLOT(resultUpdated_slot(int)));
    connect(client, SIGNAL(workShowChanged(bool)), this, SLOT(workShowChanged_slot(bool)));
    connect(client, &Client::toAutonomic, this, &MainWindow::toAutonomic_slot);

    setMode(Mode::Offline);

    task = new L_Task(this);
    ui->paint_main_cnv->setTask(task);

    backup.setTask(task);

    ui->paint_main_tool_palette_black_btn   ->setProperty("color", QColor(0, 0, 0));
    ui->paint_main_tool_palette_blue_btn    ->setProperty("color", QColor(0, 0, 255));
    ui->paint_main_tool_palette_brown_btn   ->setProperty("color", QColor(150, 94, 0));
    ui->paint_main_tool_palette_gray_btn    ->setProperty("color", QColor(160, 160, 160));
    ui->paint_main_tool_palette_green_btn   ->setProperty("color", QColor(0, 255, 0));
    ui->paint_main_tool_palette_pink_btn    ->setProperty("color", QColor(255, 113, 181));
    ui->paint_main_tool_palette_red_btn     ->setProperty("color", QColor(255, 0, 0));
    ui->paint_main_tool_palette_white_btn   ->setProperty("color", QColor(255, 255, 255));
    ui->paint_main_tool_palette_yellow_btn  ->setProperty("color", QColor(255, 255, 0));

    connect(ui->paint_main_tool_palette_black_btn,  &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_palette_btn_clicked);
    connect(ui->paint_main_tool_palette_blue_btn,   &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_palette_btn_clicked);
    connect(ui->paint_main_tool_palette_brown_btn,  &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_palette_btn_clicked);
    connect(ui->paint_main_tool_palette_gray_btn,   &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_palette_btn_clicked);
    connect(ui->paint_main_tool_palette_green_btn,  &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_palette_btn_clicked);
    connect(ui->paint_main_tool_palette_pink_btn,   &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_palette_btn_clicked);
    connect(ui->paint_main_tool_palette_red_btn,    &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_palette_btn_clicked);
    connect(ui->paint_main_tool_palette_white_btn,  &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_palette_btn_clicked);
    connect(ui->paint_main_tool_palette_yellow_btn, &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_palette_btn_clicked);

    ui->paint_main_tool_create_point_btn    ->setProperty("type", static_cast<int>(L_CanvasObjType::point));
    ui->paint_main_tool_create_line_btn     ->setProperty("type", static_cast<int>(L_CanvasObjType::line));
    ui->paint_main_tool_create_triangle_btn ->setProperty("type", static_cast<int>(L_CanvasObjType::triangle));
    ui->paint_main_tool_create_rect_btn     ->setProperty("type", static_cast<int>(L_CanvasObjType::rect));
    ui->paint_main_tool_create_ellipse_btn  ->setProperty("type", static_cast<int>(L_CanvasObjType::ellipse));

    connect(ui->paint_main_tool_create_point_btn,    &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_create_btn_clicked);
    connect(ui->paint_main_tool_create_line_btn,     &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_create_btn_clicked);
    connect(ui->paint_main_tool_create_triangle_btn, &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_create_btn_clicked);
    connect(ui->paint_main_tool_create_rect_btn,     &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_create_btn_clicked);
    connect(ui->paint_main_tool_create_ellipse_btn,  &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_create_btn_clicked);

    ui->paint_main_tool_update_lrotate_btn  ->setProperty("type", static_cast<int>(ToolType::RotateLeft));
    ui->paint_main_tool_update_rrotate_btn  ->setProperty("type", static_cast<int>(ToolType::RotateRight));
    ui->paint_main_tool_update_up_btn       ->setProperty("type", static_cast<int>(ToolType::MoveUp));
    ui->paint_main_tool_update_down_btn     ->setProperty("type", static_cast<int>(ToolType::MoveDown));
    ui->paint_main_tool_update_left_btn     ->setProperty("type", static_cast<int>(ToolType::MoveLeft));
    ui->paint_main_tool_update_right_btn    ->setProperty("type", static_cast<int>(ToolType::MoveRight));
    ui->paint_main_tool_update_uwidth_btn   ->setProperty("type", static_cast<int>(ToolType::IncreaseWidth));
    ui->paint_main_tool_update_dwidth_btn   ->setProperty("type", static_cast<int>(ToolType::DecreaseWidth));
    ui->paint_main_tool_update_uheight_btn  ->setProperty("type", static_cast<int>(ToolType::IncreaseHeight));
    ui->paint_main_tool_update_dheight_btn  ->setProperty("type", static_cast<int>(ToolType::DecreaseHeight));
    ui->paint_main_tool_update_delete_btn   ->setProperty("type", static_cast<int>(ToolType::Delete));
    ui->paint_main_tool_update_fill_btn     ->setProperty("type", static_cast<int>(ToolType::Paint));
    ui->paint_main_tool_update_next_btn     ->setProperty("type", static_cast<int>(ToolType::Next));
    ui->paint_main_tool_update_previous_btn ->setProperty("type", static_cast<int>(ToolType::Previous));

    connect(ui->paint_main_tool_update_lrotate_btn , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_rrotate_btn , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_up_btn      , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_down_btn    , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_left_btn    , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_right_btn   , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_uwidth_btn  , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_dwidth_btn  , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_uheight_btn , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_dheight_btn , &QToolButton::pressed, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_delete_btn  , &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_fill_btn    , &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_next_btn    , &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_update_btn_clicked);
    connect(ui->paint_main_tool_update_previous_btn, &QToolButton::clicked, this, &MainWindow::on_paint_main_tool_update_btn_clicked);

    task->paint(QColor(255, 255, 255));

    connect(ui->paint_main_tool_update_lrotate_btn, &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);
    connect(ui->paint_main_tool_update_rrotate_btn, &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);
    connect(ui->paint_main_tool_update_up_btn,      &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);
    connect(ui->paint_main_tool_update_down_btn,    &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);
    connect(ui->paint_main_tool_update_right_btn,   &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);
    connect(ui->paint_main_tool_update_left_btn,    &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);
    connect(ui->paint_main_tool_update_uwidth_btn,  &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);
    connect(ui->paint_main_tool_update_dwidth_btn,  &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);
    connect(ui->paint_main_tool_update_uheight_btn, &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);
    connect(ui->paint_main_tool_update_dheight_btn, &QToolButton::released, this, &MainWindow::on_paint_main_tool_update_btn_released);

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::MainWindow::closeEvent(QCloseEvent *)
{
    delete task;
    client->disconnectFrom();
}

void MainWindow::setMode(Mode mode)
{
    switch (mode) {
    case Mode::Online:
        ui->central_status_lb->hide();
        ui->start_connect_btn->hide();
        break;
    case Mode::Offline:
        ui->central_status_lb->show();
        ui->start_connect_btn->show();
        break;
    }
    _mode = mode;
}

void MainWindow::on_paint_main_tool_palette_btn_clicked()
{
    auto btn = qobject_cast<QToolButton*>(sender());
    auto color = btn->property("color").value<QColor>();
    task->paint(color);
}

void MainWindow::on_paint_main_tool_create_btn_clicked()
{
    auto btn = qobject_cast<QToolButton*>(sender());
    auto typeVar = btn->property("type");
    assert(typeVar.type() == QVariant::Int);
    auto type = static_cast<L_CanvasObjType>(typeVar.toInt());

    task->push(
                new L_CanvasObject(type, QColor(255, 255, 255), 0, QPoint(0, 0), QSize(3, 3)));

    ui->paint_main_tool_stk->setCurrentIndex(1);
    updateSpecTool();

    //sendWork();
}

void MainWindow::on_paint_main_tool_update_btn_clicked()
{
    auto btn = qobject_cast<QToolButton*>(sender());
    auto typeVar = btn->property("type");
    assert(typeVar.type() == QVariant::Int);
    auto utype = static_cast<ToolType>(typeVar.toInt());

    switch (utype) {
    case ToolType::RotateLeft:
        timer.start(task, &L_Task::rotate, -L_CanvasObject::rotateStep);
        break;
    case ToolType::RotateRight:
        timer.start(task, &L_Task::rotate, L_CanvasObject::rotateStep);
        break;
    case ToolType::MoveUp:
        timer.start(task, &L_Task::move, 0, L_CanvasObject::moveStep);
        break;
    case ToolType::MoveDown:
        timer.start(task, &L_Task::move, 0, -L_CanvasObject::moveStep);
        break;
    case ToolType::MoveLeft:
        timer.start(task, &L_Task::move, -L_CanvasObject::moveStep, 0);
        break;
    case ToolType::MoveRight:
        timer.start(task, &L_Task::move, L_CanvasObject::moveStep, 0);
        break;
    case ToolType::IncreaseWidth:
        timer.start(task, &L_Task::resize, L_CanvasObject::resizeStep, 0);
        break;
    case ToolType::DecreaseWidth:
        timer.start(task, &L_Task::resize, -L_CanvasObject::resizeStep, 0);
        break;
    case ToolType::IncreaseHeight:
        timer.start(task, &L_Task::resize, 0, L_CanvasObject::resizeStep);
        break;
    case ToolType::DecreaseHeight:
        timer.start(task, &L_Task::resize, 0, -L_CanvasObject::resizeStep);
        break;
    case ToolType::Paint:
        ui->paint_main_tool_stk->setCurrentIndex(2);
        break;
    case ToolType::Delete:
        task->pop();
        ui->paint_main_tool_stk->setCurrentIndex(0);
        break;
    case ToolType::Next:
        task->next();
        updateTool();
        break;
    case ToolType::Previous:
        task->previous();
        updateTool();
        break;
    }
}

void MainWindow::on_paint_main_tool_update_btn_released()
{
    timer.stop();
}

void MainWindow::taskUpdated_slot(const QJsonObject &data)
{
    if (taskAtWork) {
        client->sendStatusData("error", 1, "Task already at work.");
    }
    else {
        try {
            task->fromJSON(data);
            client->sendData("accept", "Task accept.");

            ui->start_message_ls->setText("Новое задание!");
            ui->start_continue_btn->hide();
            ui->start_start_btn->show();

            updateTask();

        }  catch (std::exception& ex) {
            client->sendStatusData("error", 1, "Incorrect task data.");
        }
        taskAtWork = true;
    }
}

void MainWindow::resultUpdated_slot(int mark)
{
    ui->start_message_ls->setText("Your mark is " + QString::number(mark));
}

void MainWindow::workShowChanged_slot(bool value)
{
    isShow = value;
}

void MainWindow::toAutonomic_slot()
{
    setMode(Mode::Offline);
}

void MainWindow::updateTask()
{
    assert(task);

    ui->paint_task_te->setText(task->title() + "\n" + task->text());
    ui->paint_main_data_lb->setText(task->name());
    updateTool();
}

void MainWindow::updateTool()
{
    assert(task);
    assert(task->hasValidData());

    ui->paint_main_object_lb->setText(task->current()->name());

    if(task->current()->hasObject()) {
        ui->paint_main_tool_stk->setCurrentIndex(1);
        updateSpecTool();
    }
    else
        ui->paint_main_tool_stk->setCurrentIndex(0);
}

void MainWindow::updateSpecTool()
{
    if (task->current()->object()->type() == L_CanvasObjType::point)
        setSpecToolProp(false, false, false, false);
    else if (task->current()->object()->type() == L_CanvasObjType::line)
        setSpecToolProp(true, true, false, false);
    else
        setSpecToolProp(true, true, true, true);
}

void MainWindow::setSpecToolProp(bool dwidth, bool uwidth, bool dhieght, bool uheight)
{
    ui->paint_main_tool_update_dheight_btn->setEnabled(dhieght);
    ui->paint_main_tool_update_uheight_btn->setEnabled(uheight);
    ui->paint_main_tool_update_dwidth_btn->setEnabled(dwidth);
    ui->paint_main_tool_update_uwidth_btn->setEnabled(uwidth);
}

void MainWindow::sendWork()
{
    if (_mode == Mode::Offline) {
        QMessageBox::warning(this, "Error", "There is no connection to the server. Contact your administrator.");
        backup.save();
        return;
    }
    client->sendData("work", task->toJSON());
}

void MainWindow::on_start_start_btn_clicked()
{
    updateTool();
    ui->central_stk->setCurrentIndex(1);
    client->sendData("start", QJsonValue());
    backup.start();
}

void MainWindow::on_paint_main_tool_palette_back_btn_clicked()
{
    ui->paint_main_tool_stk->setCurrentIndex(1);
}

void MainWindow::on_paint_main_send_btn_clicked()
{
    if (_mode == Mode::Offline) {
        Dialog dlg(client);
        if (dlg.exec() == QDialog::Rejected) return;
        _mode = Mode::Online;
    }

    ui->central_stk->setCurrentIndex(0);
    ui->start_message_ls->setText("Checking...");
    ui->start_start_btn->hide();

    client->sendData("complete", task->toJSON());
    backup.stop();
    taskAtWork = false;
}

void MainWindow::on_start_continue_btn_clicked()
{
    ui->start_message_ls->setText("Заданий нет");
    ui->start_continue_btn->hide();
}

void MainWindow::on_start_load_btn_clicked()
{
    auto fileName = QFileDialog::getOpenFileName(this, "Загрузить", QDir::current().path(), "Autosave (*.autosave)");
    if (fileName.isEmpty()) return;

    closeable<QFile> file(fileName);
    if (file.open(QFile::ReadOnly)) {
        try {
            task->fromJSON(QJsonDocument::fromJson(file.readAll()).object());
        } catch (std::invalid_argument&) {
            QMessageBox::warning(this, "Error", "This file contains incorrect data\nor is damaged.", QMessageBox::Close);
            return;
        } catch (std::bad_alloc&) {
            QMessageBox::warning(this, "Error", "Failed to deploy task, memory problems.", QMessageBox::Close);
            return;
        }
        updateTask();
        ui->central_stk->setCurrentIndex(1);
        return;
    }
    QMessageBox::warning(this, "Error", "Could not open file.", QMessageBox::Close);
}

void MainWindow::on_start_connect_btn_clicked()
{
    Dialog dlg(client);
    setMode(dlg.exec() == QDialog::Accepted ? Mode::Online : Mode::Offline);
}
