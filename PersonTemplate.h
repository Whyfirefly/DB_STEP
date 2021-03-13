#ifndef PERSONTEMPLATE_H
#define PERSONTEMPLATE_H

#include<QString>

struct PersonTemplate{
    int id;
    QString name;
    QString lastName;
    QString patronym;
    QString dateOfBirth;
    QString otherData;
    int isActive;

    PersonTemplate(){
    }

    PersonTemplate(QString lastName, QString name, QString patronym, QString dateOfBirth, int isActive = 1, QString otherData = "0", int id = -1){
        this->id = id;
        this->name = name;
        this ->lastName = lastName;
        this->patronym = patronym;
        this->dateOfBirth = dateOfBirth;
        this->otherData = otherData;
        this->isActive = isActive;
    }
};

#endif // PERSONTEMPLATE_H
