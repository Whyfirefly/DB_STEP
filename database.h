#pragma once
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>
#include "PersonTemplate.h"
#include "DataBaseQuery.h"


class DataBase
{
private:
    QSqlDatabase db;

public:
    DataBase();
    DataBase(QString path);

    void Open();
    void Close();
    int Execute(QString tableName, PersonTemplate person, QString sql, QString valueName);
    void Insert(QString tableName, QString firstname, QString lastname, QString patronym, QString dateOfBirth, QString otherData, QString valueName);
    void Edit(QString tableName, int id, QString firstname, QString lastname, QString patronym, QString dateOfBirth, QString otherData, QString valueName);
    void Delete(QString tableName, int id);
    int GiveMeId(QString tableName, QString lastName, QString name);
    PersonTemplate Search(QString tableName, int id);

};

