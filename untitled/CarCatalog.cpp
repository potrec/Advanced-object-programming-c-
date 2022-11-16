//
// Created by potrec on 16.11.2022.
//

#include "CarCatalog.h"
#include <QMap>
#include "Car.h"
#include <iostream>
#include <QString>
#include <QtAlgorithms>
using namespace std;

CarCatalog::CarCatalog() {


}

CarCatalog::~CarCatalog() {

}

void CarCatalog::addCar(int index,Car car) {
    carCatalog.insert(index,car);

}
void CarCatalog::showCars() {
    cout<< "Car catalog:" << endl;
    QMapIterator<int, Car> i(carCatalog);
while (i.hasNext()) {
        i.next();
        cout<<"Id: " << i.key() << "Car's mark & model: "<< i.value().getBrand()<<" " << i.value().getModel()<< " Car's year: "<<i.value().getYear()<<" Car's VIN: "<< i.value().getVin()<<endl;
    }

}
int CarCatalog::countCarsOlderThan(int year) {
    int count = 0;
    QMapIterator<int, Car> i(carCatalog);
    while (i.hasNext()) {
        i.next();
        if(i.value().getYear() < year){
            count++;
        }
    }
    return count;
}

void CarCatalog::removeCarsByVin(string vin) {
    QMapIterator<int, Car> i(carCatalog);
    while (i.hasNext()) {
        i.next();
        if(i.value().getVin() == vin){
            carCatalog.remove(i.key());
        }
    }
}

void CarCatalog::showCarsInOrder(int mode) {
    //mode 1 - show cars by year
    //mode 2 - show cars by brand alphabetically

    if(mode == 1){
        cout<< "Car catalog by car age: " << endl;
        QMap<int, Car> sortedMap;
        QMapIterator<int, Car> i(carCatalog);
        while (i.hasNext()) {
            i.next();
            sortedMap.insert(i.value().getYear(),i.value());
        }
        QMapIterator<int, Car> j(sortedMap);
        while (j.hasNext()) {
            j.next();
            cout<< "Car's mark & model: "<< j.value().getBrand()<<" " << j.value().getModel()<< " Car's year: "<<j.value().getYear()<<" Car's VIN: "<< j.value().getVin()<<endl;
        }
    }
    if(mode == 2){
        cout<< "Car catalog by car brand: " << endl;
        QMap<QString, Car> sortedMap;
        QMapIterator<int, Car> i(carCatalog);
        while (i.hasNext()) {
            i.next();
            sortedMap.insert(QString::fromStdString(i.value().getBrand()),i.value());
        }
        QMapIterator<QString, Car> j(sortedMap);
        while (j.hasNext()) {
            j.next();
            cout<< "Car's mark & model: "<< j.value().getBrand()<<" " << j.value().getModel()<< " Car's year: "<<j.value().getYear()<<" Car's VIN: "<< j.value().getVin()<<endl;
        }
    }



}




