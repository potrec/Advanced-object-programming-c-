//
// Created by potrec on 16.11.2022.
//

#include "Countries.h"
#include <iostream>
#include <QSet>

void Countries::addCountry(int index,Country country) {
    countries.insert(index,country);
}

void Countries::removeCountry(int id) {
    countries.remove(id);
}

void Countries::showCountries() {
    for (auto i = countries.begin(); i != countries.end(); ++i) {
        std::cout << i.key() << " " << i.value().getCountryName().toStdString() << " " << i.value().getCapitalName().toStdString() << " " << i.value().getPopulation() << " " << i.value().getArea() << std::endl;
    }
}

void Countries::showOnlyCountries() {
    QSet<QString> countriesSet;
    for (auto i = countries.begin(); i != countries.end(); ++i) {
        countriesSet.insert(i.value().getCountryName());
    }
    for (auto i = countriesSet.begin(); i != countriesSet.end(); ++i) {
        std::cout << i->toStdString() << std::endl;
    }
}

void Countries::showCountryInRange(int min, int max) {
    for (auto i = countries.begin(); i != countries.end(); ++i) {
        if(i.value().getPopulation() >= min && i.value().getPopulation() <= max){
            std::cout << i.key() << " " << i.value().getCountryName().toStdString() << " " << i.value().getCapitalName().toStdString() << " " << i.value().getPopulation() << " " << i.value().getArea() << std::endl;
        }
    }
}

void Countries::removeCountryWhoseNameIs(QString name) {
    QMapIterator<int, Country> i(countries);
    while (i.hasNext()) {
        i.next();
        if(i.value().getCountryName() == name){
            countries.remove(i.key());
        }
    }
}

void Countries::showCountriesByPopulation(int mode) {
    //mode 1 - show countries by population ascending
    //mode 2 - show countries by population descending
    if(mode==1){
        QMap<int,Country> countriesByPopulation;
        for (auto i = countries.begin(); i != countries.end(); ++i) {
            countriesByPopulation.insert(i.value().getPopulation(),i.value());
        }
        for (auto i = countriesByPopulation.begin(); i != countriesByPopulation.end(); ++i) {
            std::cout << i.key() << " " << i.value().getCountryName().toStdString() << " " << i.value().getCapitalName().toStdString() << " " << i.value().getArea() << std::endl;
        }
    }
    else if(mode==2){
        QMap<int,Country> countriesByPopulation;
        for (auto i = countries.begin(); i != countries.end(); ++i) {
            countriesByPopulation.insert(i.value().getPopulation(),i.value());
        }
        for (auto i = countriesByPopulation.end(); i != countriesByPopulation.begin(); --i) {
            std::cout << i.key() << " " << i.value().getCountryName().toStdString() << " " << i.value().getCapitalName().toStdString() << " " << i.value().getArea() << std::endl;
        }

    }




}

