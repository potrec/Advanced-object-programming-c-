//
// Created by potrec on 12.10.2022.
//

#include<iostream>
#include "Figure.h"
#include "Circle.h"

using namespace std;

Circle::Circle(float r1) {
    r = r1;
    cout << endl << "Konstruktor w klasie Circle" << endl;
}

Circle::~Circle() {
    cout << "Destruktor w klasie Circle" << endl;
}

void Circle::calculateArea() {
    float p = 3.14 * r * r;
    setArea(p);
}

void Circle::calculateCircuit() {
    float c = 2 * 3.14 * r;
    setCircuit(c);
}
