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

int DataBase::Execute_2(Ui_MainWindow *ui, QString tableName, PersonTemplate person, QString sql, QString valueName = "0"){
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
    int flag = query.exec();
    return flag;
    /*
    if(query.exec()){
        ui->statusbar->showMessage("Cool Exec");
    } else {
        ui->statusbar->showMessage( " Didn't work - " + sql);
    }*/
}

void DataBase::Insert(QString tableName, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData);
    QString sql = GiveMeInsertString(tableName, valueName);
    Execute(tableName, person, sql, valueName);
}


// Done
int DataBase::Insert_2(Ui_MainWindow *ui, QString tableName, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData);
    QString sql = GiveMeInsertString(tableName, valueName);
    return Execute_2(ui,tableName, person, sql, valueName);
}


//Done
void DataBase::Edit(QString tableName, int id, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData, id);
    QString sql = GiveMeUpdateString(tableName, valueName);
    Execute(tableName, person, sql, valueName);
}

int DataBase::Edit_2(Ui_MainWindow *ui, QString tableName, int id, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData, id);
    QString sql = GiveMeUpdateString(tableName, valueName);
    valueName = ":" + valueName;
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":id", person.id);
    query.bindValue(":lastName", person.lastName);
    query.bindValue(":name", person.name);
    query.bindValue(":patronym", person.patronym);
    query.bindValue(":dateOfBirth", person.dateOfBirth);
    if(person.otherData != "0") {
        query.bindValue(valueName, person.otherData);
    }
    query.bindValue(":isActive", 1);
    return query.exec();
    
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

int DataBase::Delete_2(Ui_MainWindow *ui, QString tableName, int id){

    PersonTemplate person("Какое-то", "Дерьмо", "Чтобы", "Занять", 0, "Место", id);
    QString sql = GiveMeDeleteString(tableName);
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":id", id);
    return query.exec();
    /*if(query.exec()){
        ui->statusbar->showMessage("Cool Exec");
    } else {
        ui->statusbar->showMessage( " Didn't work - " + sql);
    }*/
}



int DataBase::GiveMeId(QString tableName, QString lastName, QString name = "0"){
  PersonTemplate person(lastName, name, "Чтобы", "Занять", 0, "Место");
  auto sql = GiveMeIdString(tableName, name);
  person.id = Execute(tableName, person, sql);
  return person.id;
}


//Done, redo name value
int DataBase::GiveMeId_2(Ui_MainWindow *ui, QString tableName, QString lastName, QString name = "0"){
  PersonTemplate person(lastName, name, "Чтобы", "Занять", 0, "Место");
  auto sql = GiveMeIdString(tableName, name);
  QSqlQuery query;
  query.prepare(sql);
  query.bindValue(":lastName", lastName);
  query.bindValue(":name", name);
  query.exec();
  if(query.next()){
      person.id = query.value(0).toInt();
        return person.id;
  } else {
      return -1;
  }
}

//  количество строк
PersonTemplate DataBase::Search(QString tableName, int id){
    PersonTemplate person;
    auto sql = GiveMeSearchString(tableName);
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":id", id);
    query.exec();

    //int size = query.record().count();
    int size = 7;
    person.id = query.value(0).toInt();
    person.lastName = query.value(1).toString();
    person.name = query.value(2).toString();
    person.patronym = query.value(3).toString();
    if(size > 6){
        person.otherData = query.value(4).toString();
    }
    person.isActive = query.value(size - 1).toInt();
    return person;
}


PersonTemplate DataBase::Search_2(Ui_MainWindow *ui, QString tableName, int id){
    PersonTemplate person;
    auto sql = GiveMeSearchString(tableName);
    QSqlQuery query;
    query.prepare(sql);
    query.bindValue(":id", id);
    query.exec();

    //int size = query.record().count();
    int size = 7;

    if(query.next()){
        person.id = query.value(0).toInt();
        person.lastName = query.value(1).toString();
        person.name = query.value(2).toString();
        person.patronym = query.value(3).toString();
        if(size > 6){
            person.otherData = query.value(4).toString();
        }
        person.isActive = query.value(size - 1).toInt();
        ui->statusbar->showMessage(person.lastName);
        return person;

    } else {
        ui->statusbar->showMessage("None");
    }
}
