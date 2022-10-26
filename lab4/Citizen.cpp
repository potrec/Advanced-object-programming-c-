//
// Created by potrec on 27.10.2022.
//

#include "Citizen.h"

Citizen::Citizen() {}

Citizen::Citizen(const string &name, const string &surname, int age, char sex, const string &postalCode) : name(name),
                                                                                                           surname(surname),
                                                                                                           age(age),
                                                                                                           sex(sex),
                                                                                                           postal_code(
                                                                                                                   postalCode) {}

const string &Citizen::getName() const {
    return name;
}

void Citizen::setName(const string &name) {
    Citizen::name = name;
}

const string &Citizen::getSurname() const {
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

const string &Citizen::getPostalCode() const {
    return postal_code;
}

void Citizen::setPostalCode(const string &postalCode) {
    postal_code = postalCode;
}


