#pragma once
//#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
//#include "PersonTemplate.h"
#include "DataBaseQuery.h"
#include "ui_mainwindow.h"


class DataBase
{
private:
    QSqlDatabase db;

public:
    DataBase();
    DataBase(QString path);

    void Open();
    void Open_2(Ui_MainWindow *mainWindow);
    void Close();
    int Execute(QString tableName, PersonTemplate person, QString sql, QString valueName);
    void Insert(QString tableName, QString firstname, QString lastname, QString patronym, QString dateOfBirth, QString otherData, QString valueName);
    void Edit(QString tableName, int id, QString firstname, QString lastname, QString patronym, QString dateOfBirth, QString otherData, QString valueName);
    void Delete(QString tableName, int id);
    int GiveMeId(QString tableName, QString lastName, QString name);

    int Execute_2(Ui_MainWindow *ui, QString tableName, PersonTemplate person, QString sql, QString valueName);
    int Insert_2(Ui_MainWindow *ui, QString tableName, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData, QString valueName);
    int Edit_2(Ui_MainWindow *ui, QString tableName, int id, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData, QString valueName);
    int Delete_2(Ui_MainWindow *ui, QString tableName, int id);
    int GiveMeId_2(Ui_MainWindow *ui, QString tableName, QString lastName, QString name);
    PersonTemplate Search_2(Ui_MainWindow *ui, QString tableName, int id);
    PersonTemplate Search(QString tableName, int id);

};
