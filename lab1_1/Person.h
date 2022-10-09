//
// Created by student on 06.10.2022.
//

#ifndef LAB1_PERSON_H
#define LAB1_PERSON_H
#include <iostream>
#include"Person.h"

using namespace std;
void init(string name1, string surname1, int age1);
class Person
{
private:
string name;
string surname;
int age;
public:
Person(string name1, string surname1, int age1);
Person();
void setAge(int age1);
string getSurname();
bool is_18();
void showInfoPerson();
void init(string name1, string surname1, int age1);
};

#endif //LAB1_PERSON_H
