//
// Created by potrec on 16.11.2022.
//

#ifndef UNTITLED_CAR_H
#define UNTITLED_CAR_H


#include <QString>
#include <String>
#include <iostream>
using namespace std;

class Car {
private:
public:
    Car(const string &brand, const string &model, int year, const string &vin);

private:
public:
    const string &getBrand() const;

    void setBrand(const string &brand);

    const string &getModel() const;

    void setModel(const string &model);

    int getYear() const;

    void setYear(int year);

    const string &getVin() const;

    void setVin(const string &vin);

private:
    string brand;
    string model;
    int year;
    string vin;

public:
    Car();
    ~Car();


};


#endif //UNTITLED_CAR_H
