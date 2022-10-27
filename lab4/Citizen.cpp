//
// Created by potrec on 27.10.2022.
//

#include <iostream>
#include "Citizen.h"

using namespace std;

Citizen::Citizen() {}

Citizen::Citizen(string name,string surname, int age, char sex,string postalCode) : name(name),
                                                                                                           surname(surname),
                                                                                                           age(age),
                                                                                                           sex(sex),
                                                                                                           postal_code(
                                                                                                                   postalCode) {}

string Citizen::getName() const {
    return name;
}

void Citizen::setName(const string &name) {
    Citizen::name = name;
}

string Citizen::getSurname() const {
    return surname;
}

void Citizen::setSurname(const string &surname) {
    Citizen::surname = surname;
}

int Citizen::getAge() const {
    return age;
}

void Citizen::setAge(int age) {
    Citizen::age = age;
}

char Citizen::getSex() const {
    return sex;
}

void Citizen::setSex(char sex) {
    Citizen::sex = sex;
}

string Citizen::getPostalCode() const {
    return postal_code;
}

void Citizen::setPostalCode(const string &postalCode) {
    postal_code = postalCode;
}

void Citizen::show() {
    cout << getName() << getAge() << getPostalCode() << getSurname();

}


