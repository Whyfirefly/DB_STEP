#ifndef DATABASE_H
#define DATABASE_H
#include <QString>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QVariant>


class DataBase
{
private:
    QSqlDatabase db;

public:
    DataBase();
    DataBase(QString path);

    void Open();
    void Close();
    void Insert(QString tableName, QString firstname, QString lastname, QString patronym, QString dateOfBirth);
    void Delete(QString tableName, QString key);
    void Edit(QString tableName, QString id, QString firstname, QString lastname, QString patronym, QString dateOfBirth, QString otherData, QString valueName);

};

#endif // DATABASE_H
