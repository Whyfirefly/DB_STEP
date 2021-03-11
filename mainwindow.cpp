#include "mainwindow.h"
#include "ui_mainwindow.h"


DataBase db("C:\\KretininProjects\\BDFILES\\users.sqlite");
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Автозагрузка
    db.Open();
}

MainWindow::~MainWindow()
{
    delete ui;
    // Автосохранение
    db.Close();
}

 void MainWindow::on_Button_Insert_Student_clicked()
{
  QString tableName = "table_students";
  QString valueName = "Faculty";
  QString firstname = ui->Input_Name->text();
  QString lastname = ui->Input_LastName->text();
  QString patronym = ui->Input_Patronym->text();
  QString birthday = ui->Input_Birthday->text();
  QString faculty = ui->Input_Faculty->text();

  db.Insert(tableName, firstname, lastname, patronym, birthday);
  // показать сообщение
}

 void MainWindow::on_Button_Edit_Student_clicked()
{
  QString tableName = "table_students";
  QString valueName = "Faculty";
  QString id = "4";
  QString firstname = ui->Input_Search_Name->text();
  QString lastname = ui->Input_Search_LastName->text();
  QString patronym = ui->Input_Search_Patronym->text();
  QString birthday = ui->Input_Search_Birthday->text();
  QString faculty = ui->Input_Search_Faculty->text();
  db.Edit(tableName, id,  firstname, lastname, patronym, birthday, faculty, valueName);
}


//Button_Find_onclick
// void MainWindow::on_button_find_clicked()
//{
//  QString fistname, lastname, patronym, dateOfBirth, otherdata
//    auto key = ui->input_Key->text();
//      auto person = db.QueryPerson(key);
//      firstname = person.firstname;
//      lastname = person.lastname;
//      patronym = person.patronym;
//      dateofbirth = person.dateofbirth;
//      if(otherdata заполнена чем-то ){
//             Функция, записывающая в ui-таблицу данные
//}

//
//
//
//}

//Button_Edit_Onclick
// Input_Name
//Button_Delete_Onclick
// void MainWindow::on_Button_Delete_clicked()
//{
//  QString fistname, lastname, patronym, dateOfBirth, otherdata
//    auto key = ui->input_Key->text();
//    auto person = db.QueryPerson(key);
//    person
//}

//Button_ClearFind_Onlick

//Button_ClearAdd_Onlick

//Button_Import_onclick

//Button_export_onclick



