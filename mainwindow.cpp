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


//очистить поля
 void MainWindow::on_Button_Insert_Student_clicked()
{
  QString tableName = "students";
  QString valueName = "faculty";
  QString firstname = ui->Input_Name->text();
  QString lastname = ui->Input_LastName->text();
  QString patronym = ui->Input_Patronym->text();
  QString birthday = ui->Input_Birthday->text();
  QString faculty = ui->Input_Faculty->text();

  ui->statusbar->showMessage("Insert");
  db.Insert_2(ui, tableName, firstname, lastname, patronym, birthday, faculty, valueName);
    //db.Insert(tableName, firstname, lastname, patronym, birthday, faculty, valueName);
  // показать сообщение
  ClearUIInput(ui);

}


 // очистить поля после апдейтпа
 void MainWindow::on_Button_Edit_Student_clicked()
{
  QString tableName = "students";
  QString valueName = "Faculty";
  QString name = ui->Input_Search_Name->text();
  QString lastName = ui->Input_Search_LastName->text();
  auto s =  ui->Input_Search_LastName;
  QString patronym = ui->Input_Search_Patronym->text();
  QString dateOfBirth = ui->Input_Search_Birthday->text();
  QString faculty = ui->Input_Search_Faculty->text();
  int id = db.GiveMeId_2(ui, tableName, lastName, "0");
  //db.Edit(tableName, id,  firstname, lastname, patronym, birthday, faculty, valueName);
  db.Edit_2(ui, tableName, id, name, lastName, patronym, dateOfBirth, faculty, valueName);
  ClearUIEdit(ui);
}

/*
  void MainWindow::on_Button_Delete_clicked(){
      int id = ui->Input_Search_Id->text();
      QString tableName = "table_students";
// дописать функцию giveMeProperTableName
      db.Delete_2(ui, tableName, id);
  }
*/


// Подумать, куда сохранять ИД
  void MainWindow::on_Button_Search_clicked(){
      QString tableName = "students";
      QString lastName = ui->Input_Search->text();

      int id = db.GiveMeId_2(ui, tableName, lastName, "0");
      ui->statusbar->showMessage("123 " + QString::number(id));
      PersonTemplate person = db.Search_2(ui, tableName, id);
      ui->Input_Search_Name->setText(person.name);
      ui->Input_Search_LastName->setText(person.lastName);
      ui->Input_Search_Patronym->setText(person.patronym);
      ui->Input_Search_Birthday->setText(person.dateOfBirth);
      ui->Input_Search_Faculty->setText(person.otherData);
      ClearUISearch(ui);
  }

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
