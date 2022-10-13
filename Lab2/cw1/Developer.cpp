//
// Created by potrec on 12.10.2022.
//
#include <iostream>
#include "Developer.h"
#include "Employee.h"

using namespace std;

Developer::Developer(string surname1, int age1, int experience1, int salary1) : Employee(surname1,age1,experience1,salary1) {
    cout << "Konstruktor w klasie Developer" << endl;
}

Developer::~Developer() {
    cout << "Destruktor w klasie Developer" << endl;
}

float Developer::calculateBonus(int value) {
    float a = value + 0.2*value*(getSalary()+getExperience());
    setBonus(a);
    return a;
}


void Developer::show() {
    cout << "Nazwisko: " << getSurname() << " Wiek: " << getAge() << " Doswiadczenie: " << getExperience() << " Pensja: " << getSalary()<<" + bonus: " << getBonus()<<endl;
    cout << "Wiek zatrudnienia: " << ageEmployment() << endl;

}

int Developer::calculateSalary(int salary) {
    return salary;
}

float Developer::getBonus() const {
    return bonus;
}

void Developer::setBonus(float bonus) {
    Developer::bonus = bonus;
}

int Developer::ageEmployment() {
    return getAge() - getExperience();


}

int Developer::getLataPracy() const {
    return lataPracy;
}

void Developer::setLataPracy(int lataPracy) {
    Developer::lataPracy = lataPracy;
}



