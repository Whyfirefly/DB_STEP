/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget_2;
    QWidget *Add;
    QTabWidget *tabWidget;
    QWidget *tab_Student;
    QFormLayout *formLayout_2;
    QLabel *label_name;
    QLineEdit *Input_Name;
    QLabel *label_name_3;
    QLineEdit *Input_LastName;
    QLabel *label_name_4;
    QLineEdit *Input_Patronym;
    QLabel *label_name_5;
    QLineEdit *Input_Birthday;
    QLabel *label_name_6;
    QLineEdit *Input_Faculty;
    QPushButton *Button_Insert_Student;
    QPushButton *Button_Export_S;
    QLineEdit *Input_Address_S;
    QLabel *label;
    QWidget *tab_Employee;
    QFormLayout *formLayout_3;
    QLabel *label_name_8;
    QLineEdit *Input_Name_2;
    QLabel *label_name_9;
    QLineEdit *Input_LastName_2;
    QLabel *label_name_7;
    QLineEdit *Input_Patronym_2;
    QLabel *label_birth_2;
    QLineEdit *Input_Birthday_2;
    QLabel *label_post;
    QLineEdit *Input_Post;
    QPushButton *Button_Insert_Employee;
    QPushButton *Button_Export_E;
    QLabel *label_2;
    QLineEdit *Input_Address_E;
    QWidget *tab_Applicants;
    QFormLayout *formLayout_6;
    QLabel *label_name_25;
    QLineEdit *Input_Name_3;
    QLabel *label_lastname;
    QLineEdit *Input_LastName_3;
    QLabel *label_patron;
    QLineEdit *Input_Patronym_3;
    QLabel *label_birth;
    QLineEdit *Input_Birthday_3;
    QPushButton *Button_Insert_Applicants;
    QPushButton *Button_Export_A;
    QLabel *label_3;
    QLineEdit *Input_Address_A;
    QWidget *Find;
    QPushButton *Button_Search;
    QLineEdit *Input_Search;
    QTabWidget *tabWidget_3;
    QWidget *tab_Student_2;
    QFormLayout *formLayout_4;
    QLabel *label_name_2;
    QLineEdit *Input_Search_Name;
    QLabel *label_name_10;
    QLineEdit *Input_Search_LastName;
    QLabel *label_name_11;
    QLineEdit *Input_Search_Patronym;
    QLabel *label_name_12;
    QLineEdit *Input_Search_Birthday;
    QLabel *label_name_13;
    QLineEdit *Input_Search_Faculty;
    QPushButton *Button_Edit_Student;
    QWidget *tab_Employee_2;
    QFormLayout *formLayout_5;
    QLabel *label_name_14;
    QLineEdit *Input_Search_Name_2;
    QLabel *label_name_15;
    QLineEdit *Input_Search_LastName_2;
    QLabel *label_name_16;
    QLineEdit *Input_Search_Patronym_2;
    QLabel *label_birth_3;
    QLineEdit *Input_Search_Birthday_2;
    QLabel *label_post_2;
    QLineEdit *Input_Search_Post;
    QPushButton *Button_Edit_Employee;
    QWidget *tab_Applicants_2;
    QFormLayout *formLayout_7;
    QLabel *label_name_26;
    QLineEdit *Input_Search_Name_3;
    QLabel *label_lastname_2;
    QLineEdit *Input_Search_LastName_3;
    QLabel *label_patron_2;
    QLineEdit *Input_Search_Patronym_3;
    QLabel *label_birth_4;
    QLineEdit *Input_Search_Birthday_3;
    QPushButton *Button_Edit_Applicants;
    QWidget *Exp_Inp;
    QLineEdit *Input_Address;
    QPushButton *Button_Import;
    QPushButton *Button_Export;
    QPushButton *Button_Clear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(1050, 621);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget_2 = new QTabWidget(centralwidget);
        tabWidget_2->setObjectName(QString::fromUtf8("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(20, 20, 751, 461));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        tabWidget_2->setFont(font);
        Add = new QWidget();
        Add->setObjectName(QString::fromUtf8("Add"));
        tabWidget = new QTabWidget(Add);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 20, 541, 311));
        tab_Student = new QWidget();
        tab_Student->setObjectName(QString::fromUtf8("tab_Student"));
        formLayout_2 = new QFormLayout(tab_Student);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_name = new QLabel(tab_Student);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_name);

        Input_Name = new QLineEdit(tab_Student);
        Input_Name->setObjectName(QString::fromUtf8("Input_Name"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, Input_Name);

        label_name_3 = new QLabel(tab_Student);
        label_name_3->setObjectName(QString::fromUtf8("label_name_3"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, label_name_3);

        Input_LastName = new QLineEdit(tab_Student);
        Input_LastName->setObjectName(QString::fromUtf8("Input_LastName"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, Input_LastName);

        label_name_4 = new QLabel(tab_Student);
        label_name_4->setObjectName(QString::fromUtf8("label_name_4"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_name_4);

        Input_Patronym = new QLineEdit(tab_Student);
        Input_Patronym->setObjectName(QString::fromUtf8("Input_Patronym"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, Input_Patronym);

        label_name_5 = new QLabel(tab_Student);
        label_name_5->setObjectName(QString::fromUtf8("label_name_5"));

        formLayout_2->setWidget(3, QFormLayout::LabelRole, label_name_5);

        Input_Birthday = new QLineEdit(tab_Student);
        Input_Birthday->setObjectName(QString::fromUtf8("Input_Birthday"));

        formLayout_2->setWidget(3, QFormLayout::FieldRole, Input_Birthday);

        label_name_6 = new QLabel(tab_Student);
        label_name_6->setObjectName(QString::fromUtf8("label_name_6"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_name_6);

        Input_Faculty = new QLineEdit(tab_Student);
        Input_Faculty->setObjectName(QString::fromUtf8("Input_Faculty"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, Input_Faculty);

        Button_Insert_Student = new QPushButton(tab_Student);
        Button_Insert_Student->setObjectName(QString::fromUtf8("Button_Insert_Student"));
        Button_Insert_Student->setMaximumSize(QSize(16777215, 21));
        Button_Insert_Student->setFont(font);

        formLayout_2->setWidget(6, QFormLayout::SpanningRole, Button_Insert_Student);

        Button_Export_S = new QPushButton(tab_Student);
        Button_Export_S->setObjectName(QString::fromUtf8("Button_Export_S"));
        Button_Export_S->setFont(font);

        formLayout_2->setWidget(7, QFormLayout::SpanningRole, Button_Export_S);

        Input_Address_S = new QLineEdit(tab_Student);
        Input_Address_S->setObjectName(QString::fromUtf8("Input_Address_S"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, Input_Address_S);

        label = new QLabel(tab_Student);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label);

        tabWidget->addTab(tab_Student, QString());
        tab_Employee = new QWidget();
        tab_Employee->setObjectName(QString::fromUtf8("tab_Employee"));
        formLayout_3 = new QFormLayout(tab_Employee);
        formLayout_3->setObjectName(QString::fromUtf8("formLayout_3"));
        label_name_8 = new QLabel(tab_Employee);
        label_name_8->setObjectName(QString::fromUtf8("label_name_8"));

        formLayout_3->setWidget(0, QFormLayout::LabelRole, label_name_8);

        Input_Name_2 = new QLineEdit(tab_Employee);
        Input_Name_2->setObjectName(QString::fromUtf8("Input_Name_2"));

        formLayout_3->setWidget(0, QFormLayout::FieldRole, Input_Name_2);

        label_name_9 = new QLabel(tab_Employee);
        label_name_9->setObjectName(QString::fromUtf8("label_name_9"));

        formLayout_3->setWidget(1, QFormLayout::LabelRole, label_name_9);

        Input_LastName_2 = new QLineEdit(tab_Employee);
        Input_LastName_2->setObjectName(QString::fromUtf8("Input_LastName_2"));

        formLayout_3->setWidget(1, QFormLayout::FieldRole, Input_LastName_2);

        label_name_7 = new QLabel(tab_Employee);
        label_name_7->setObjectName(QString::fromUtf8("label_name_7"));

        formLayout_3->setWidget(2, QFormLayout::LabelRole, label_name_7);

        Input_Patronym_2 = new QLineEdit(tab_Employee);
        Input_Patronym_2->setObjectName(QString::fromUtf8("Input_Patronym_2"));

        formLayout_3->setWidget(2, QFormLayout::FieldRole, Input_Patronym_2);

        label_birth_2 = new QLabel(tab_Employee);
        label_birth_2->setObjectName(QString::fromUtf8("label_birth_2"));

        formLayout_3->setWidget(3, QFormLayout::LabelRole, label_birth_2);

        Input_Birthday_2 = new QLineEdit(tab_Employee);
        Input_Birthday_2->setObjectName(QString::fromUtf8("Input_Birthday_2"));

        formLayout_3->setWidget(3, QFormLayout::FieldRole, Input_Birthday_2);

        label_post = new QLabel(tab_Employee);
        label_post->setObjectName(QString::fromUtf8("label_post"));

        formLayout_3->setWidget(4, QFormLayout::LabelRole, label_post);

        Input_Post = new QLineEdit(tab_Employee);
        Input_Post->setObjectName(QString::fromUtf8("Input_Post"));

        formLayout_3->setWidget(4, QFormLayout::FieldRole, Input_Post);

        Button_Insert_Employee = new QPushButton(tab_Employee);
        Button_Insert_Employee->setObjectName(QString::fromUtf8("Button_Insert_Employee"));
        Button_Insert_Employee->setMaximumSize(QSize(16777215, 21));
        Button_Insert_Employee->setFont(font);

        formLayout_3->setWidget(5, QFormLayout::SpanningRole, Button_Insert_Employee);

        Button_Export_E = new QPushButton(tab_Employee);
        Button_Export_E->setObjectName(QString::fromUtf8("Button_Export_E"));
        Button_Export_E->setFont(font);

        formLayout_3->setWidget(6, QFormLayout::SpanningRole, Button_Export_E);

        label_2 = new QLabel(tab_Employee);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout_3->setWidget(7, QFormLayout::LabelRole, label_2);

        Input_Address_E = new QLineEdit(tab_Employee);
        Input_Address_E->setObjectName(QString::fromUtf8("Input_Address_E"));

        formLayout_3->setWidget(7, QFormLayout::FieldRole, Input_Address_E);

        tabWidget->addTab(tab_Employee, QString());
        tab_Applicants = new QWidget();
        tab_Applicants->setObjectName(QString::fromUtf8("tab_Applicants"));
        formLayout_6 = new QFormLayout(tab_Applicants);
        formLayout_6->setObjectName(QString::fromUtf8("formLayout_6"));
        label_name_25 = new QLabel(tab_Applicants);
        label_name_25->setObjectName(QString::fromUtf8("label_name_25"));

        formLayout_6->setWidget(0, QFormLayout::LabelRole, label_name_25);

        Input_Name_3 = new QLineEdit(tab_Applicants);
        Input_Name_3->setObjectName(QString::fromUtf8("Input_Name_3"));

        formLayout_6->setWidget(0, QFormLayout::FieldRole, Input_Name_3);

        label_lastname = new QLabel(tab_Applicants);
        label_lastname->setObjectName(QString::fromUtf8("label_lastname"));

        formLayout_6->setWidget(1, QFormLayout::LabelRole, label_lastname);

        Input_LastName_3 = new QLineEdit(tab_Applicants);
        Input_LastName_3->setObjectName(QString::fromUtf8("Input_LastName_3"));

        formLayout_6->setWidget(1, QFormLayout::FieldRole, Input_LastName_3);

        label_patron = new QLabel(tab_Applicants);
        label_patron->setObjectName(QString::fromUtf8("label_patron"));

        formLayout_6->setWidget(2, QFormLayout::LabelRole, label_patron);

        Input_Patronym_3 = new QLineEdit(tab_Applicants);
        Input_Patronym_3->setObjectName(QString::fromUtf8("Input_Patronym_3"));

        formLayout_6->setWidget(2, QFormLayout::FieldRole, Input_Patronym_3);

        label_birth = new QLabel(tab_Applicants);
        label_birth->setObjectName(QString::fromUtf8("label_birth"));

        formLayout_6->setWidget(3, QFormLayout::LabelRole, label_birth);

        Input_Birthday_3 = new QLineEdit(tab_Applicants);
        Input_Birthday_3->setObjectName(QString::fromUtf8("Input_Birthday_3"));

        formLayout_6->setWidget(3, QFormLayout::FieldRole, Input_Birthday_3);

        Button_Insert_Applicants = new QPushButton(tab_Applicants);
        Button_Insert_Applicants->setObjectName(QString::fromUtf8("Button_Insert_Applicants"));
        Button_Insert_Applicants->setMaximumSize(QSize(16777215, 21));
        Button_Insert_Applicants->setFont(font);

        formLayout_6->setWidget(5, QFormLayout::SpanningRole, Button_Insert_Applicants);

        Button_Export_A = new QPushButton(tab_Applicants);
        Button_Export_A->setObjectName(QString::fromUtf8("Button_Export_A"));
        Button_Export_A->setFont(font);

        formLayout_6->setWidget(6, QFormLayout::SpanningRole, Button_Export_A);

        label_3 = new QLabel(tab_Applicants);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout_6->setWidget(7, QFormLayout::LabelRole, label_3);

        Input_Address_A = new QLineEdit(tab_Applicants);
        Input_Address_A->setObjectName(QString::fromUtf8("Input_Address_A"));

        formLayout_6->setWidget(7, QFormLayout::FieldRole, Input_Address_A);

        tabWidget->addTab(tab_Applicants, QString());
        tabWidget_2->addTab(Add, QString());
        Find = new QWidget();
        Find->setObjectName(QString::fromUtf8("Find"));
        Button_Search = new QPushButton(Find);
        Button_Search->setObjectName(QString::fromUtf8("Button_Search"));
        Button_Search->setGeometry(QRect(510, 41, 80, 31));
        Input_Search = new QLineEdit(Find);
        Input_Search->setObjectName(QString::fromUtf8("Input_Search"));
        Input_Search->setGeometry(QRect(171, 41, 341, 31));
        tabWidget_3 = new QTabWidget(Find);
        tabWidget_3->setObjectName(QString::fromUtf8("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(90, 80, 541, 311));
        tab_Student_2 = new QWidget();
        tab_Student_2->setObjectName(QString::fromUtf8("tab_Student_2"));
        formLayout_4 = new QFormLayout(tab_Student_2);
        formLayout_4->setObjectName(QString::fromUtf8("formLayout_4"));
        label_name_2 = new QLabel(tab_Student_2);
        label_name_2->setObjectName(QString::fromUtf8("label_name_2"));

        formLayout_4->setWidget(0, QFormLayout::LabelRole, label_name_2);

        Input_Search_Name = new QLineEdit(tab_Student_2);
        Input_Search_Name->setObjectName(QString::fromUtf8("Input_Search_Name"));

        formLayout_4->setWidget(0, QFormLayout::FieldRole, Input_Search_Name);

        label_name_10 = new QLabel(tab_Student_2);
        label_name_10->setObjectName(QString::fromUtf8("label_name_10"));

        formLayout_4->setWidget(1, QFormLayout::LabelRole, label_name_10);

        Input_Search_LastName = new QLineEdit(tab_Student_2);
        Input_Search_LastName->setObjectName(QString::fromUtf8("Input_Search_LastName"));

        formLayout_4->setWidget(1, QFormLayout::FieldRole, Input_Search_LastName);

        label_name_11 = new QLabel(tab_Student_2);
        label_name_11->setObjectName(QString::fromUtf8("label_name_11"));

        formLayout_4->setWidget(2, QFormLayout::LabelRole, label_name_11);

        Input_Search_Patronym = new QLineEdit(tab_Student_2);
        Input_Search_Patronym->setObjectName(QString::fromUtf8("Input_Search_Patronym"));

        formLayout_4->setWidget(2, QFormLayout::FieldRole, Input_Search_Patronym);

        label_name_12 = new QLabel(tab_Student_2);
        label_name_12->setObjectName(QString::fromUtf8("label_name_12"));

        formLayout_4->setWidget(3, QFormLayout::LabelRole, label_name_12);

        Input_Search_Birthday = new QLineEdit(tab_Student_2);
        Input_Search_Birthday->setObjectName(QString::fromUtf8("Input_Search_Birthday"));

        formLayout_4->setWidget(3, QFormLayout::FieldRole, Input_Search_Birthday);

        label_name_13 = new QLabel(tab_Student_2);
        label_name_13->setObjectName(QString::fromUtf8("label_name_13"));

        formLayout_4->setWidget(4, QFormLayout::LabelRole, label_name_13);

        Input_Search_Faculty = new QLineEdit(tab_Student_2);
        Input_Search_Faculty->setObjectName(QString::fromUtf8("Input_Search_Faculty"));

        formLayout_4->setWidget(4, QFormLayout::FieldRole, Input_Search_Faculty);

        Button_Edit_Student = new QPushButton(tab_Student_2);
        Button_Edit_Student->setObjectName(QString::fromUtf8("Button_Edit_Student"));
        Button_Edit_Student->setMaximumSize(QSize(16777215, 21));
        Button_Edit_Student->setFont(font);

        formLayout_4->setWidget(5, QFormLayout::SpanningRole, Button_Edit_Student);

        tabWidget_3->addTab(tab_Student_2, QString());
        tab_Employee_2 = new QWidget();
        tab_Employee_2->setObjectName(QString::fromUtf8("tab_Employee_2"));
        formLayout_5 = new QFormLayout(tab_Employee_2);
        formLayout_5->setObjectName(QString::fromUtf8("formLayout_5"));
        label_name_14 = new QLabel(tab_Employee_2);
        label_name_14->setObjectName(QString::fromUtf8("label_name_14"));

        formLayout_5->setWidget(0, QFormLayout::LabelRole, label_name_14);

        Input_Search_Name_2 = new QLineEdit(tab_Employee_2);
        Input_Search_Name_2->setObjectName(QString::fromUtf8("Input_Search_Name_2"));

        formLayout_5->setWidget(0, QFormLayout::FieldRole, Input_Search_Name_2);

        label_name_15 = new QLabel(tab_Employee_2);
        label_name_15->setObjectName(QString::fromUtf8("label_name_15"));

        formLayout_5->setWidget(1, QFormLayout::LabelRole, label_name_15);

        Input_Search_LastName_2 = new QLineEdit(tab_Employee_2);
        Input_Search_LastName_2->setObjectName(QString::fromUtf8("Input_Search_LastName_2"));

        formLayout_5->setWidget(1, QFormLayout::FieldRole, Input_Search_LastName_2);

        label_name_16 = new QLabel(tab_Employee_2);
        label_name_16->setObjectName(QString::fromUtf8("label_name_16"));

        formLayout_5->setWidget(2, QFormLayout::LabelRole, label_name_16);

        Input_Search_Patronym_2 = new QLineEdit(tab_Employee_2);
        Input_Search_Patronym_2->setObjectName(QString::fromUtf8("Input_Search_Patronym_2"));

        formLayout_5->setWidget(2, QFormLayout::FieldRole, Input_Search_Patronym_2);

        label_birth_3 = new QLabel(tab_Employee_2);
        label_birth_3->setObjectName(QString::fromUtf8("label_birth_3"));

        formLayout_5->setWidget(3, QFormLayout::LabelRole, label_birth_3);

        Input_Search_Birthday_2 = new QLineEdit(tab_Employee_2);
        Input_Search_Birthday_2->setObjectName(QString::fromUtf8("Input_Search_Birthday_2"));

        formLayout_5->setWidget(3, QFormLayout::FieldRole, Input_Search_Birthday_2);

        label_post_2 = new QLabel(tab_Employee_2);
        label_post_2->setObjectName(QString::fromUtf8("label_post_2"));

        formLayout_5->setWidget(4, QFormLayout::LabelRole, label_post_2);

        Input_Search_Post = new QLineEdit(tab_Employee_2);
        Input_Search_Post->setObjectName(QString::fromUtf8("Input_Search_Post"));

        formLayout_5->setWidget(4, QFormLayout::FieldRole, Input_Search_Post);

        Button_Edit_Employee = new QPushButton(tab_Employee_2);
        Button_Edit_Employee->setObjectName(QString::fromUtf8("Button_Edit_Employee"));
        Button_Edit_Employee->setMaximumSize(QSize(16777215, 21));
        Button_Edit_Employee->setFont(font);

        formLayout_5->setWidget(5, QFormLayout::SpanningRole, Button_Edit_Employee);

        tabWidget_3->addTab(tab_Employee_2, QString());
        tab_Applicants_2 = new QWidget();
        tab_Applicants_2->setObjectName(QString::fromUtf8("tab_Applicants_2"));
        formLayout_7 = new QFormLayout(tab_Applicants_2);
        formLayout_7->setObjectName(QString::fromUtf8("formLayout_7"));
        label_name_26 = new QLabel(tab_Applicants_2);
        label_name_26->setObjectName(QString::fromUtf8("label_name_26"));

        formLayout_7->setWidget(0, QFormLayout::LabelRole, label_name_26);

        Input_Search_Name_3 = new QLineEdit(tab_Applicants_2);
        Input_Search_Name_3->setObjectName(QString::fromUtf8("Input_Search_Name_3"));

        formLayout_7->setWidget(0, QFormLayout::FieldRole, Input_Search_Name_3);

        label_lastname_2 = new QLabel(tab_Applicants_2);
        label_lastname_2->setObjectName(QString::fromUtf8("label_lastname_2"));

        formLayout_7->setWidget(1, QFormLayout::LabelRole, label_lastname_2);

        Input_Search_LastName_3 = new QLineEdit(tab_Applicants_2);
        Input_Search_LastName_3->setObjectName(QString::fromUtf8("Input_Search_LastName_3"));

        formLayout_7->setWidget(1, QFormLayout::FieldRole, Input_Search_LastName_3);

        label_patron_2 = new QLabel(tab_Applicants_2);
        label_patron_2->setObjectName(QString::fromUtf8("label_patron_2"));

        formLayout_7->setWidget(2, QFormLayout::LabelRole, label_patron_2);

        Input_Search_Patronym_3 = new QLineEdit(tab_Applicants_2);
        Input_Search_Patronym_3->setObjectName(QString::fromUtf8("Input_Search_Patronym_3"));

        formLayout_7->setWidget(2, QFormLayout::FieldRole, Input_Search_Patronym_3);

        label_birth_4 = new QLabel(tab_Applicants_2);
        label_birth_4->setObjectName(QString::fromUtf8("label_birth_4"));

        formLayout_7->setWidget(3, QFormLayout::LabelRole, label_birth_4);

        Input_Search_Birthday_3 = new QLineEdit(tab_Applicants_2);
        Input_Search_Birthday_3->setObjectName(QString::fromUtf8("Input_Search_Birthday_3"));

        formLayout_7->setWidget(3, QFormLayout::FieldRole, Input_Search_Birthday_3);

        Button_Edit_Applicants = new QPushButton(tab_Applicants_2);
        Button_Edit_Applicants->setObjectName(QString::fromUtf8("Button_Edit_Applicants"));
        Button_Edit_Applicants->setMaximumSize(QSize(16777215, 21));
        Button_Edit_Applicants->setFont(font);

        formLayout_7->setWidget(4, QFormLayout::SpanningRole, Button_Edit_Applicants);

        tabWidget_3->addTab(tab_Applicants_2, QString());
        tabWidget_2->addTab(Find, QString());
        Exp_Inp = new QWidget();
        Exp_Inp->setObjectName(QString::fromUtf8("Exp_Inp"));
        Input_Address = new QLineEdit(Exp_Inp);
        Input_Address->setObjectName(QString::fromUtf8("Input_Address"));
        Input_Address->setGeometry(QRect(12, 70, 721, 31));
        Button_Import = new QPushButton(Exp_Inp);
        Button_Import->setObjectName(QString::fromUtf8("Button_Import"));
        Button_Import->setGeometry(QRect(450, 140, 91, 31));
        Button_Import->setFont(font);
        Button_Export = new QPushButton(Exp_Inp);
        Button_Export->setObjectName(QString::fromUtf8("Button_Export"));
        Button_Export->setGeometry(QRect(310, 140, 91, 31));
        Button_Export->setFont(font);
        Button_Clear = new QPushButton(Exp_Inp);
        Button_Clear->setObjectName(QString::fromUtf8("Button_Clear"));
        Button_Clear->setGeometry(QRect(170, 140, 91, 31));
        tabWidget_2->addTab(Exp_Inp, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1050, 25));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget_2->setCurrentIndex(1);
        tabWidget->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label_name->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Name :</span></p></body></html>", nullptr));
        label_name_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">LastName :</span></p></body></html>", nullptr));
        label_name_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Patronym :</span></p></body></html>", nullptr));
        label_name_5->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Birthday :</span></p></body></html>", nullptr));
        label_name_6->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Faculty :</span></p></body></html>", nullptr));
        Button_Insert_Student->setText(QApplication::translate("MainWindow", "Save", nullptr));
        Button_Export_S->setText(QApplication::translate("MainWindow", "Export", nullptr));
        label->setText(QApplication::translate("MainWindow", "Address_Exp:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Student), QApplication::translate("MainWindow", "Student", nullptr));
        label_name_8->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Name :</span></p></body></html>", nullptr));
        label_name_9->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">LastName :</span></p></body></html>", nullptr));
        label_name_7->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Patronym :</span></p></body></html>", nullptr));
        label_birth_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Birthday :</span></p></body></html>", nullptr));
        label_post->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Post :</span></p></body></html>", nullptr));
        Button_Insert_Employee->setText(QApplication::translate("MainWindow", "Save", nullptr));
        Button_Export_E->setText(QApplication::translate("MainWindow", "Export", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "Address_Exp:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Employee), QApplication::translate("MainWindow", "Employee", nullptr));
        label_name_25->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Name :</span></p></body></html>", nullptr));
        label_lastname->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">LastName :</span></p></body></html>", nullptr));
        label_patron->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Patronym :</span></p></body></html>", nullptr));
        label_birth->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Birthday :</span></p></body></html>", nullptr));
        Button_Insert_Applicants->setText(QApplication::translate("MainWindow", "Save", nullptr));
        Button_Export_A->setText(QApplication::translate("MainWindow", "Export", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "Address_Exp:", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Applicants), QApplication::translate("MainWindow", "Applicants", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Add), QApplication::translate("MainWindow", "Add", nullptr));
        Button_Search->setText(QApplication::translate("MainWindow", "Find", nullptr));
        label_name_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Name :</span></p></body></html>", nullptr));
        label_name_10->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">LastName :</span></p></body></html>", nullptr));
        label_name_11->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Patronym :</span></p></body></html>", nullptr));
        label_name_12->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Birthday :</span></p></body></html>", nullptr));
        label_name_13->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Faculty :</span></p></body></html>", nullptr));
        Button_Edit_Student->setText(QApplication::translate("MainWindow", "Edit", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_Student_2), QApplication::translate("MainWindow", "Student", nullptr));
        label_name_14->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Name :</span></p></body></html>", nullptr));
        label_name_15->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">LastName :</span></p></body></html>", nullptr));
        label_name_16->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Patronym :</span></p></body></html>", nullptr));
        label_birth_3->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Birthday :</span></p></body></html>", nullptr));
        label_post_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Post :</span></p></body></html>", nullptr));
        Button_Edit_Employee->setText(QApplication::translate("MainWindow", "Save", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_Employee_2), QApplication::translate("MainWindow", "Employee", nullptr));
        label_name_26->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Name :</span></p></body></html>", nullptr));
        label_lastname_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">LastName :</span></p></body></html>", nullptr));
        label_patron_2->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Patronym :</span></p></body></html>", nullptr));
        label_birth_4->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:10pt; font-weight:600;\">Birthday :</span></p></body></html>", nullptr));
        Button_Edit_Applicants->setText(QApplication::translate("MainWindow", "Save", nullptr));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_Applicants_2), QApplication::translate("MainWindow", "Applicants", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Find), QApplication::translate("MainWindow", "Find", nullptr));
        Button_Import->setText(QApplication::translate("MainWindow", "Import", nullptr));
        Button_Export->setText(QApplication::translate("MainWindow", "Export", nullptr));
        Button_Clear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget_2->setTabText(tabWidget_2->indexOf(Exp_Inp), QApplication::translate("MainWindow", "Exp_Inp", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
