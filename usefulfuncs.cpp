#include "usefulfuncs.h"

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


Qstring giveMeInsertMessage(bool flag){
    if(flag){
      return "Insert is successful";
    } else {
      return "Insert is not successful";
    }
}

Qstring giveMeEditMessage(bool flag){
    if(flag){
      return "Data is edited successfuly";
    } else {
      return "Edit is not edited";
    }
}

Qstring giveMeDeleteMessage(bool flag){
    if(flag){
      return "Data is deleted successfuly";
    } else {
      return "Edit is not deleted";
    }
}

Qstring giveMeSearchMessage(bool flag){
    if(flag){
      return "Data is found";
    } else {
      return "Edit is not found";
    }
}
