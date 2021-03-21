#include "database.h"
#include <vector>


using namespace std;

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

void DataBase::Open_2(Ui_MainWindow *ui){
    if(db.open()){
        ui->statusbar->showMessage("Cool");
    } else {
         ui->statusbar->showMessage("Not Coll");
    }
}

void DataBase::Close(){
    db.close();
}

int DataBase::Execute(QString tableName, PersonTemplate person, QString sql, QString valueName = "0"){
    valueName = ":" + valueName;
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":tableName", tableName);
    query.bindValue(":id", person.id);
    query.bindValue(":lastName", person.lastName);
    query.bindValue(":name", person.name);
    query.bindValue(":patronymic", person.patronym);
    query.bindValue(":dateOfBirth", person.dateOfBirth);
    if(person.otherData != "0") {
        query.bindValue(valueName, person.otherData);
    }
    query.bindValue(":isActive", person.isActive);
    /*query.exec();
    return person.id;*/
    if(query.exec()){
        return 1;
    } else {
        return 0;
    }
}

void DataBase::Insert(QString tableName, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData);
    QString sql = GiveMeInsertString(tableName, valueName);
    Execute(tableName, person, sql, valueName);
}

int DataBase::Insert_2(Ui_MainWindow *ui, QString tableName, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData);
    QString sql = GiveMeInsertString(tableName, valueName);
    valueName = ":" + valueName;
    //int flag = Execute(tableName, person, sql, valueName);
    //sql = "INSERT INTO table_name (lastName, name, patronymic, dateOfBirth, faculty, isActive)";
   // sql = sql + " VALUES (:lastName, 'name', 'patronymic', 'dateOfBirth', 'faculty', 1);";
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":id", person.id);
    query.bindValue(":lastName", person.lastName);
    query.bindValue(":name", person.name);
    query.bindValue(":patronymic", person.patronym);
    query.bindValue(":dateOfBirth", person.dateOfBirth);
    if(person.otherData != "0") {
        query.bindValue(valueName, person.otherData);
    }
    query.bindValue(":isActive", 1);

    if(query.exec()){
        ui->statusbar->showMessage("Cool Exec");
    } else {

        ui->statusbar->showMessage( " Didn't work - " + sql);
    }

}



void DataBase::Edit(QString tableName, int id, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData, id);
    QString sql = GiveMeUpdateString(tableName, valueName);
    Execute(tableName, person, sql, valueName);
}

void DataBase::Edit_2(Ui_MainWindow *ui, QString tableName, int id, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData, id);
    QString sql = GiveMeUpdateString(tableName, valueName);
    valueName = ":" + valueName;
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":id", person.id);
    query.bindValue(":lastName", person.lastName);
    query.bindValue(":name", person.name);
    query.bindValue(":patronymic", person.patronym);
    query.bindValue(":dateOfBirth", person.dateOfBirth);
    if(person.otherData != "0") {
        query.bindValue(valueName, person.otherData);
    }
    query.bindValue(":isActive", 1);

    if(query.exec()){
        ui->statusbar->showMessage("Cool Exec");
    } else {
        ui->statusbar->showMessage( " Didn't work - " + sql);
    }
}



void DataBase::Delete(QString tableName, int id){

    PersonTemplate person("Какое-то", "Дерьмо", "Чтобы", "Занять", 0, "Место", id);
    QString sql = GiveMeDeleteString(tableName);
    Execute(tableName, person, sql);
}

void DataBase::Delete_2(Ui_MainWindow *ui, QString tableName, int id){

    PersonTemplate person("Какое-то", "Дерьмо", "Чтобы", "Занять", 0, "Место", id);
    QString sql = GiveMeDeleteString(tableName);

    query.prepare(sql);
    query.bindValue(":id", id);

    if(query.exec()){
        ui->statusbar->showMessage("Cool Exec");
    } else {
        ui->statusbar->showMessage( " Didn't work - " + sql);
    }
}



int DataBase::GiveMeId(QString tableName, QString lastName, QString name = "0"){
  PersonTemplate person(lastName, name, "Чтобы", "Занять", 0, "Место");
  auto sql = GiveMeIdString(tableName, name);
  person.id = Execute(tableName, person, sql);
  return person.id;
}

int DataBase::GiveMeId_2(QString tableName, QString lastName, QString name = "0"){
  PersonTemplate person(lastName, name, "Чтобы", "Занять", 0, "Место");
  auto sql = GiveMeIdString(tableName, name);

  query.prepare(sql);
  query.bindValue(":lastName", lastName);
  query.bindValue(":name", name);

  person.id = query.exec();
  return person.id;
}
/*
PersonTemplate DataBase::Search(QString tableName, int id){
    PersonTemplate person;
    auto sql = GiveMeSearchString();

    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":tableName", tableName);
    query.bindValue(":id", id);
    query.exec();
    int size = query.record().count();
    person.id = query.value(0).ToInt();
    person.lastName = query.value(1).toString();
    person.name = query.value(2).toString();
    person.patronym = query.value(3).toString();
    if(size > 6){
        person.otherData = query.value(4).toString();
    }
    person.isActive = query.value(size - 1).toInt();
    return person;
}
*/

/*
vector<PersonTemplate> GiveMeDB(){
  vector<PersonTemplate> vectorDB;

  PersonTemplate person;
    for(int i=0; i < ){

    }

}
*/
