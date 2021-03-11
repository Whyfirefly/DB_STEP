#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "database.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_Button_Insert_Student_clicked();

    void on_Button_Edit_Student_clicked();

    void on_Button_Clear_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
