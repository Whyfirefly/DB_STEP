#pragma once
#include "ui_mainwindow.h"
#include<QString>

void ClearUIInput(Ui_MainWindow *ui);
void ClearUISearch(Ui_MainWindow *ui);
void ClearUIEdit(Ui_MainWindow *ui);

QString GiveMeInsertMessage(bool flag);
QString GiveMeEditMessage(bool flag);
QString GiveMeDeleteMessage(bool flag);
QString GiveMeSearchMessage(bool flag);



