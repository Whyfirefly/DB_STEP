#pragma once
//#include <QString>
#include "PersonTemplate.h"

QString GiveMeInsertString(QString tableName, QString valueName);

QString GiveMeUpdateString(QString tableName, QString valueName);

QString GiveMeDeleteString(QString tableName);

QString GiveMeIdString(QString tableName, QString name);

QString GiveMeSearchString(QString tableName);
