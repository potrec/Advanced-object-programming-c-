//
// Created by potrec on 16.11.2022.
//

#include "Car.h"
#include <QString>

Car::~Car() {

}

Car::Car(const string &brand, const string &model, int year, const string &vin) : brand(brand), model(model),
                                                                                  year(year), vin(vin) {

}

const string &Car::getBrand() const {
    return brand;
}

void Car::setBrand(const string &brand) {
    Car::brand = brand;
}

const string &Car::getModel() const {
    return model;
}

void Car::setModel(const string &model) {
    Car::model = model;
}

int Car::getYear() const {
    return year;
}

void Car::setYear(int year) {
    Car::year = year;
}

const string &Car::getVin() const {
    return vin;
}

void Car::setVin(const string &vin) {
    Car::vin = vin;
}




