//
// Created by potrec on 09.10.2022.
//

#ifndef LAB1_STUDENT_H
#define LAB1_STUDENT_H
#include"Person.h"


class Student: public Person
{
private:
    string index;
public:
    Student(string name1, string surname1, int age1, string index1);
    Student();
    void setIndex(string index1);
    string getIndex();
    void showInfoStudent();
};

#endif //LAB1_STUDENT_H
