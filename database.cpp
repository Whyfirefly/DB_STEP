#include "database.h"

DataBase::DataBase()
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("users.db");
}

DataBase::DataBase(QString path)
{
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName(path);
}

void DataBase::Open(){
    db.open();
}

void DataBase::Close(){
    db.close();
}


void DataBase::Insert(QString tableName, QString firstname, QString lastname, QString patronym, QString dateOfBirth){
    QString sql;

        sql = "INSERT INTO " + tableName + "(name, lastname, patronym, dateOfBirth) ";
        sql += "VALUES (" + firstname + ", " + lastname + ", " + patronym + ", " + dateOfBirth + ");";


    QSqlQuery query;
    query.exec(sql);
   /* if(query.next()){
       return 1;
    }*/
}

void DataBase::Edit(QString tableName, QString id, QString firstname, QString lastname, QString patronym, QString dateOfBirth, QString otherData, QString valueName){
    QString sql;
    if(otherData == "0"){
        sql = "UPDATE " + tableName + "(name, lastname, patronym, dateOfBirth) ";
        sql += "SET name =" + firstname + ", lastname = " + lastname + ", patronym = " + patronym + ", dateOfBirth = " + dateOfBirth + " active = 1 ";
        sql += " WHERE id = " + id + ";";
    }

    QSqlQuery query;
    query.exec(sql);
}

void DataBase::Delete(QString tableName, QString id){
    QString sql;

    sql = "UPDATE " + tableName + "(name, lastname, patronym, dateOfBirth) ";
    sql += "SET activate = 0 ";
    sql += " WHERE id = " + id + ";";

    QSqlQuery query;
    query.exec(sql);
}

