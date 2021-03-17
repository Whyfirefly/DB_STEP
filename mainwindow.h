#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QFile>
#include <QTextStream>
#include <QString>
#include <QMessageBox>
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

    //void on_Button_Edit_Student_clicked();

    //void on_Button_Clear_clicked();

    void on_Button_Export_S_clicked();

    void on_Button_Import_clicked();

    void on_Button_Export_E_clicked();

    void on_Button_Export_A_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
