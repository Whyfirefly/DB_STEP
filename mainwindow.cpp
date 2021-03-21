#include "mainwindow.h"
#include "ui_mainwindow.h"



DataBase db("C:\\Users\\Admin\\Desktop\\DB_STEP.sqlite");
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    // Автозагрузка
    db.Open_2(this->ui);
    }

MainWindow::~MainWindow()
{
    delete ui;
    // Автосохранение
    db.Close();
}

 void MainWindow::on_Button_Insert_Student_clicked()
{
  QString tableName = "table_name";
  QString valueName = "faculty";
  QString firstname = ui->Input_Name->text();
  QString lastname = ui->Input_LastName->text();
  QString patronym = ui->Input_Patronym->text();
  QString birthday = ui->Input_Birthday->text();
  QString faculty = ui->Input_Faculty->text();

  ui->statusbar->showMessage("Insert");
  //db.Insert_2(ui, tableName, firstname, lastname, patronym, birthday, faculty, valueName);
    db.Insert(tableName, firstname, lastname, patronym, birthday, faculty, valueName);
  // показать сообщение
}
/*
 void MainWindow::on_Button_Edit_Student_clicked()
{
  QString tableName = "table_students";
  QString valueName = "Faculty";
  int id = 1;
  QString firstname = ui->Input_Edit_Name->text();
  QString lastname = ui->Input_Edit_LastName->text();
  QString patronym = ui->Input_Edit_Patronym->text();
  QString birthday = ui->Input_Edit_Birthday->text();
  QString faculty = ui->Input_Edit_Faculty->text();
  //db.Edit(tableName, id,  firstname, lastname, patronym, birthday, faculty, valueName);
  db.Edit_2(ui, tableName, id, firstname, lastname, patronym, birthday, faculty, valueName)
}
*/

/*
  void MainWindow::on_Button_Delete_clicked(){
      int id = ui->Input_Search_Id->text();
      QString tableName = "table_students";
// дописать функцию giveMeProperTableName
      db.Delete_2(ui, tableName, id);
  }
*/
/*
  void MainWindow::on_Button_Find_clicked(){
      QString tableName = "table_students";
      Qstring lastName =   QString lastname = ui->Input_Find_LastName->text();
      Qstring lastName =   QString lastname = ui->Input_Find_Name->text();
      int id = db.GiveMeId(tableName, lastName, name);
      PersonTemplate person = db.Search(tableName, id);
      //ui->Input_Edit_Name->set;
  }
*/
//очищение данных на экране
 /*
void MainWindow::on_Button_Clear_clicked()
 {
     ui->Input_Search->clear();

 }
*/
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



void MainWindow::on_Button_Export_S_clicked()
{
    QString Input_Address_S;
    QFile File_Step (Input_Address_S);

    if(!File_Step.open(QFile::Append | QFile::Text)){
        QMessageBox ::information(this,"ERROR","No path corect");
        return;
    }

    QTextStream stream(&File_Step);

    stream  << ui->Input_Name->text() << ";"
            << ui->Input_LastName->text()<< ";"
            << ui->Input_Patronym->text()<< ";"
            << ui->Input_Birthday->text()<< ";"
            << ui->Input_Faculty->text() + "\n";

    File_Step.flush();
    File_Step.close();
}
void MainWindow::on_Button_Export_E_clicked()
{
    QString Input_Address_E;
    QFile File_Step (Input_Address_E);

    if(!File_Step.open(QFile::Append | QFile::Text)){
        QMessageBox ::information(this,"ERROR","No path corect");
        return;
    }

    QTextStream stream(&File_Step);

    stream
            << ui->Input_Name->text() << ";"
            << ui->Input_LastName->text()<< ";"
            << ui->Input_Patronym->text()<< ";"
            << ui->Input_Birthday->text()<< ";"
            << ui->Input_Post->text() + "\n";
}
void MainWindow::on_Button_Export_A_clicked()
{
    QString Input_Address_A;
    QFile File_Step (Input_Address_A);

    if(!File_Step.open(QFile::Append | QFile::Text)){
        QMessageBox ::information(this,"ERROR","No path corect");
        return;
    }

    QTextStream stream(&File_Step);

    stream
            << ui->Input_Name->text() << ";"
            << ui->Input_LastName->text()<< ";"
            << ui->Input_Patronym->text()<< ";"
            << ui->Input_Birthday->text()<< + "\n";

}


void MainWindow::on_Button_Import_clicked()
{
    QString Input_Address_S;
    QFile File_Step ("C:\\Users\\Admin\\Desktop\\DB_STEP-master\\File_Step.csv");

    if (!File_Step.open(QFile::ReadOnly | QFile::Text)){
        QMessageBox ::information(this,"ERROR","No path corecct");
        return;
    }

    QTextStream stream(&File_Step);

    QString temp = stream.readLine();
    QRegExp tagExp(";");
    QStringList firstList = temp.split(tagExp);

    ui->statusbar->showMessage(firstList[0]);
}
