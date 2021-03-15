#pragma once
//#include <QString>
#include "PersonTemplate.h"

QString GiveMeInsertString(QString tableName, QString valueName){
  QString sql = "INSERT INTO " + tableName;
  sql += " (name, lastname, patronymic, dateOfBirth";
  if(valueName != "0"){
    sql += ", " + valueName;
  }
  sql += ", isActive) ";
  sql += "VALUES (:lastName, :name, :patronymic, :dateOfBirth";
  if(valueName != "0"){
    sql += ", :" + valueName;
  }
  sql += ", 1);";

  return sql;
}

QString GiveMeUpdateString(QString valueName){

  QString sql = "UPDATE :tableName SET lastName = :lastName, name = :name, patronymic = :patronym, dateOfBirth = :dateOfBirth";
  if(valueName != "0"){
      sql += ", " + valueName + " = :" + valueName;
  }
  sql += ", isActive = :isActive WHERE id = :id;";

  return sql;
}

QString GiveMeDeleteString(){
  QString sql = "UPDATE :tableName SET isActive = 0 ";
  sql += " WHERE id = :id;";
  return sql;
}

QString GiveMeIdString(QString name){
  QString sql = "SELECT id FROM tableName WHERE lastName = :lastName";
  if(name != "0") {
    sql += "AND name = :name";
  }
  sql += ";";

  return sql;
}

QString GiveMeSearchString(){
  QString sql = "SELECT * FROM :tableName WHERE id = :id;";
  return sql;
}

