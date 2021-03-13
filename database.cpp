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

void DataBase::Close(){
    db.close();
}
/*Р’СЃРµ С„СѓРЅРєС†РёРё СѓРЅРёРІРµСЂСЃР°Р»СЊРЅС‹Рµ РґР»СЏ РІСЃРµС… С‚Р°Р±Р»РёС†, СЏ СЂРµС€РёР» РїСЂРѕРїРёСЃР°С‚СЊ РІ РЅРёС… РІСЃРµ РЅРµРѕР±С…РѕРґРёРјС‹Рµ РїСЂРѕРІРµСЂРєРё, РѕСЃС‚Р°РµС‚СЃСЏ С‚РѕР»СЊРєРѕ РїРµСЂРµРґР°С‚СЊ РЅСѓР¶РЅРѕРµ РєРѕР»РёС‡РµСЃС‚РІРѕ РґР°РЅРЅС‹С…*/

/* Execute - СѓРЅРёРІРµСЂСЃР°Р»СЊРЅР°СЏ РІРѕР№РґРѕРІСЃРєР°СЏ С„СѓРЅРєС†РёСЏ РґР»СЏ РІС‹РїРѕР»РЅРµРЅРёСЏ Р»СЋР±С‹С… Р·Р°РїСЂРѕСЃРѕРІ. */
/*РџРѕР»СѓС‡Р°РµС‚ РёРјСЏ С‚Р°Р±Р»РёС†С‹, С€Р°Р±Р»РѕРЅ СЃС‚СЂСѓРєС‚СѓСЂС‹ PersonTemplate СЃ РґР°РЅРЅС‹РјРё, СЃС‚СЂРѕРєСѓ СЃ Р·Р°РїСЂРѕСЃРѕРј Рё РёРјСЏ РґРѕРїРѕР»РЅРёС‚РµР»СЊРЅРѕРіРѕ СЃС‚РѕР»Р±С†Р° (РїСЂ. С„Р°РєСѓР»СЊС‚РµС‚), РµСЃР»Рё С‚Р°РєРѕРІРѕР№ РµСЃС‚СЊ.*/
/*РњРѕР¶РµС‚ РЅРµ СЃСЂР°Р±РѕС‚Р°С‚СЊ РёР·-Р·Р° С‚РѕРіРѕ, С‡С‚Рѕ РІ СЂР°Р·РЅС‹С… Р·Р°РїСЂРѕСЃР°С… РёСЃРїРѕР»СЊР·СѓРµС‚СЃСЏ СЂР°Р·РЅРѕРµ РєРѕР»РёС‡РµСЃС‚РІРѕ Р·РЅР°С‡РµРЅРёР№, Рё РІ С„СѓРЅРєС†РёРё РёРґРµС‚ РїСЂРёРІСЏР·РєР° Р·РЅР°С‡РµРЅРёР№, РєР°РєРёС… РЅРµС‚ РІ Р·Р°РїСЂРѕСЃРµ, РІ С‚Р°РєРѕРј СЃР»СѓС‡Р°Рµ РјРЅРµ РїСЂРёРґРµС‚СЃСЏ РїРµСЂРµРїРёСЃР°С‚СЊ С„СѓРЅРєС†РёРё, РЅРѕ С‚Р°Рј РІРёРґРЅРѕ Р±СѓРґРµС‚*/
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
    query.exec();
    return person.id;
}

void DataBase::Insert(QString tableName, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData);
    QString sql = GiveMeInsertString(valueName);
    DataBase::Execute(tableName, person, sql, valueName);
}


void DataBase::Edit(QString tableName, int id, QString name, QString lastName, QString patronym, QString dateOfBirth, QString otherData = "0", QString valueName = "0"){
    PersonTemplate person(lastName, name, patronym, dateOfBirth, 1, otherData, id);
    QString sql = GiveMeUpdateString(valueName);
    DataBase::Execute(tableName, person, sql, valueName);
}


void DataBase::Delete(QString tableName, int id){

    PersonTemplate person("Какое-то", "Дерьмо", "Чтобы", "Занять", 0, "Место", id);
    QString sql = GiveMeDeleteString();
    DataBase::Execute(tableName, person, sql);
}

int DataBase::GiveMeId(QString tableName, QString lastName, QString name = "0"){
  PersonTemplate person(lastName, name, "Чтобы", "Занять", 0, "Место");
  auto sql = GiveMeIdString(name);
  person.id = DataBase::Execute(tableName, person, sql);
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
