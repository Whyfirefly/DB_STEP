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
