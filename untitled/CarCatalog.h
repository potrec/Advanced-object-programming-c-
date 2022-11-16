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
    void removeCar(Car car);
    void editCar(Car car);
    void showCars();
    //count cars older than given year
    int countCarsOlderThan(int year);
    //remove cars by given VIM
    void removeCarsByVin(string vin);
    void showCarsInOrder(int mode);
    void sortCarsByYear();
    void sortCarsByBrand();



};


#endif //UNTITLED_CARCATALOG_H
