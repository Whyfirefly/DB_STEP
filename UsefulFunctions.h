#ifndef USEFULFUNCTIONS_H
#define USEFULFUNCTIONS_H

#include "ui_mainwindow.h"

void ClearUIInput(Ui_MainWindow *ui){
    ui->Input_Name->clear();
    ui->Input_LastName->clear();
    ui->Input_Patronym->clear();
    ui->Input_Birthday->clear();
    ui->Input_Faculty->clear();
}

void ClearUISearch(Ui_MainWindow *ui){
    ui->Input_Search->clear();

}

void ClearUIEdit(Ui_MainWindow *ui){
    ui->Input_Search_Name->clear();
    ui->Input_Search_LastName->clear();
    ui->Input_Search_Patronym->clear();
    ui->Input_Search_Birthday->clear();
    ui->Input_Search_Faculty->clear();
}


QString GiveMeInsertMessage(bool flag){
    if(flag){
      return "Insert is successful";
    } else {
      return "Insert is not successful";
    }
}

QString GiveMeEditMessage(bool flag){
    if(flag){
      return "Data is edited successfuly";
    } else {
      return "Edit is not edited";
    }
}

QString GiveMeDeleteMessage(bool flag){
    if(flag){
      return "Data is deleted successfuly";
    } else {
      return "Edit is not deleted";
    }
}

QString GiveMeSearchMessage(bool flag){
    if(flag){
      return "Data is found";
    } else {
      return "Edit is not found";
    }
}


#endif // USEFULFUNCTIONS_H
