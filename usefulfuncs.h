#ifndef USEFULFUNCS_H
#define USEFULFUNCS_H
#include "ui_mainwindow.h"

void ClearUIInput(Ui_MainWindow *ui);
void ClearUISearch(Ui_MainWindow *ui);
void ClearUIEdit(Ui_MainWindow *ui);

Qstring giveMeInsertMessage(bool flag);
Qstring giveMeEditMessage(bool flag);
Qstring giveMeDeleteMessage(bool flag);
Qstring giveMeSearchMessage(bool flag);



#endif // USEFULFUNCS_H
