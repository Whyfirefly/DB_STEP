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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QTabWidget *tabWidget;
    QWidget *tab_Student;
    QFormLayout *formLayout_2;
    QLabel *label_name;
    QLabel *label_name_3;
    QLabel *label_name_4;
    QLineEdit *Input_Patronym;
    QLabel *label_name_5;
    QLabel *label_name_6;
    QLineEdit *Input_LastName;
    QLineEdit *Input_Name;
    QLineEdit *Input_Birthday;
    QLineEdit *Input_Faculty;
    QWidget *tab_Employee;
    QWidget *tab_Applicants;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tab_Student = new QWidget();
        tab_Student->setObjectName(QString::fromUtf8("tab_Student"));
        formLayout_2 = new QFormLayout(tab_Student);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        label_name = new QLabel(tab_Student);
        label_name->setObjectName(QString::fromUtf8("label_name"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, label_name);

        label_name_3 = new QLabel(tab_Student);
        label_name_3->setObjectName(QString::fromUtf8("label_name_3"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, label_name_3);

        label_name_4 = new QLabel(tab_Student);
        label_name_4->setObjectName(QString::fromUtf8("label_name_4"));

        formLayout_2->setWidget(4, QFormLayout::LabelRole, label_name_4);

        Input_Patronym = new QLineEdit(tab_Student);
        Input_Patronym->setObjectName(QString::fromUtf8("Input_Patronym"));

        formLayout_2->setWidget(4, QFormLayout::FieldRole, Input_Patronym);

        label_name_5 = new QLabel(tab_Student);
        label_name_5->setObjectName(QString::fromUtf8("label_name_5"));

        formLayout_2->setWidget(6, QFormLayout::LabelRole, label_name_5);

        label_name_6 = new QLabel(tab_Student);
        label_name_6->setObjectName(QString::fromUtf8("label_name_6"));

        formLayout_2->setWidget(8, QFormLayout::LabelRole, label_name_6);

        Input_LastName = new QLineEdit(tab_Student);
        Input_LastName->setObjectName(QString::fromUtf8("Input_LastName"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, Input_LastName);

        Input_Name = new QLineEdit(tab_Student);
        Input_Name->setObjectName(QString::fromUtf8("Input_Name"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, Input_Name);

        Input_Birthday = new QLineEdit(tab_Student);
        Input_Birthday->setObjectName(QString::fromUtf8("Input_Birthday"));

        formLayout_2->setWidget(6, QFormLayout::FieldRole, Input_Birthday);

        Input_Faculty = new QLineEdit(tab_Student);
        Input_Faculty->setObjectName(QString::fromUtf8("Input_Faculty"));

        formLayout_2->setWidget(8, QFormLayout::FieldRole, Input_Faculty);

        tabWidget->addTab(tab_Student, QString());
        tab_Employee = new QWidget();
        tab_Employee->setObjectName(QString::fromUtf8("tab_Employee"));
        tabWidget->addTab(tab_Employee, QString());
        tab_Applicants = new QWidget();
        tab_Applicants->setObjectName(QString::fromUtf8("tab_Applicants"));
        tabWidget->addTab(tab_Applicants, QString());

        gridLayout->addWidget(tabWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


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
        tabWidget->setTabText(tabWidget->indexOf(tab_Student), QApplication::translate("MainWindow", "Student", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Employee), QApplication::translate("MainWindow", "Employee", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_Applicants), QApplication::translate("MainWindow", "Applicants", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
