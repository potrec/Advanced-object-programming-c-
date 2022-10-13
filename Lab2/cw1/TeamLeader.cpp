//
// Created by potrec on 12.10.2022.
//

#include "TeamLeader.h"
#include "Employee.h"
#include <iostream>

using namespace std;

float TeamLeader::getBonus() const {
    return bonus;
}

void TeamLeader::setBonus(float bonus) {
    TeamLeader::bonus = bonus;
}

TeamLeader::TeamLeader(string surname1, int age1, int experience1, int salary1) : Employee(surname1, age1, experience1, salary1) {
    cout << "Konstruktor w klasie TeamLeader" << endl;
}

TeamLeader::~TeamLeader() {
    cout << "Destruktor w klasie TeamLeader" << endl;
}

float TeamLeader::calculateBonus(int value) {
    float a = value + 1*value*(getSalary()+getExperience());
    setBonus(a);
    return a;
}

int TeamLeader::calculateSalary(int salary) {
    return salary;
}

void TeamLeader::show() {
    cout <<  "Jestem TeamLeader: "<<getSurname()<<" z "<<getExperience()<<" letnim doswiadczeniem"<<endl;


}
