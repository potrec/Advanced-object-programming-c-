//
// Created by potrec on 16.11.2022.
//

#include "Country.h"

const QString &Country::getCountryName() const {
    return countryName;
}

void Country::setCountryName(const QString &countryName) {
    Country::countryName = countryName;
}

const QString &Country::getCapitalName() const {
    return capitalName;
}

void Country::setCapitalName(const QString &capitalName) {
    Country::capitalName = capitalName;
}

int Country::getPopulation() const {
    return population;
}

void Country::setPopulation(int population) {
    Country::population = population;
}

int Country::getArea() const {
    return area;
}

void Country::setArea(int area) {
    Country::area = area;
}


Country::Country(const QString &countryName, const QString &capitalName, int population, int area)
        : countryName(countryName), capitalName(capitalName), population(population), area(area) {}
