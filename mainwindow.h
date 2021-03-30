#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QCloseEvent>

#include "dialog.h"
#include "client.h"
#include "l_task.h"
#include "backup.h"

enum class Mode {
    Online,
    Offline
};

enum class ToolType {
    RotateLeft,
    RotateRight,
    MoveUp,
    MoveDown,
    MoveLeft,
    MoveRight,
    Paint,
    IncreaseWidth,
    DecreaseWidth,
    IncreaseHeight,
    DecreaseHeight,
    Delete,
    Next,
    Previous
};

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(Client* client, QWidget *parent = nullptr);
    ~MainWindow();

    void closeEvent (QCloseEvent *event);

    void setMode(Mode mode);
private slots:
    void on_paint_main_tool_palette_btn_clicked();
    void on_paint_main_tool_create_btn_clicked();
    void on_paint_main_tool_update_btn_clicked();
    void on_paint_main_tool_update_btn_released();

    void taskUpdated_slot(const QJsonObject& data);
    void resultUpdated_slot(int);
    void workShowChanged_slot(bool value);
    void toAutonomic_slot();

    void on_start_start_btn_clicked();
    void on_paint_main_tool_palette_back_btn_clicked();

    void on_paint_main_send_btn_clicked();

    void on_start_continue_btn_clicked();

    void on_start_load_btn_clicked();

    void on_start_connect_btn_clicked();

private:
    void updateTask();
    void updateTool();
    void updateSpecTool();

    void setSpecToolProp(bool dwidth, bool uwidth, bool dhieght, bool uheight);

    void sendWork();

    Ui::MainWindow *ui;
    Client* client = nullptr;
    L_Task* task = nullptr;

    Backup backup;

    bool taskAtWork = false;
    bool isShow = false;
    Mode _mode = Mode::Offline;

    L_TCanvasObject timer;
};
#endif // MAINWINDOW_H
