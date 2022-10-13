//
// Created by potrec on 12.10.2022.
//
#include <iostream>
#include "Employee.h"

using namespace std;

Employee::Employee(string surname1, int age1, int experience1, int salary1) {
    surname = surname1;
    age = age1;
    experience = experience1;
    salary = salary1;
    cout << "Konstruktor klasy bazowej Employee" << endl;
}

Employee::~Employee() {
    cout << "Wirtualny destruktor klasy bazowej Employee" << endl;
}

int Employee::getSalary() {
    return salary;
}

void Employee::setSalary(int salary1) {
    salary = salary1;
}

int Employee::getAge() {
    return age;
}

void Employee::setAge(int age1) {
    age = age1;
}

int Employee::getExperience() {
    return experience;
}

void Employee::setExperience(int experience1) {
    experience = experience1;
}

string Employee::getSurname() {
    return surname;
}

void Employee::setSurname(string surname1) {
    surname = surname1;
}

int Employee::ageEmployee(int age) {
    return age;
}

float Employee::calculateBonus(int value) {
    float a = value + 0.2*value*(getSalary()+getExperience());
    return a;
}


void Employee::show() {
    cout << "Nazwisko: " << surname << " Wiek: " << age << " Doświadczenie: " << experience << " Pensja: " << getSalary() << endl;
}
