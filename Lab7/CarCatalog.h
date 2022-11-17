//
// Created by potrec on 16.11.2022.
//

#ifndef UNTITLED_CARCATALOG_H
#define UNTITLED_CARCATALOG_H


#include <QMap>
#include "Car.h"
#include <QString>

class CarCatalog {
private:
    QMap<int,Car> carCatalog;

public:
    CarCatalog();
    ~CarCatalog();
    void addCar(int index,Car car);
    void showCars();
    int countCarsOlderThan(int year);
    void removeCarsByVin(string vin);
    void showCarsInOrder(int mode);



};


#endif //UNTITLED_CARCATALOG_H
