//
// Created by potrec on 16.11.2022.
//

#ifndef UNTITLED_COUNTRIES_H
#define UNTITLED_COUNTRIES_H


#include <QMap>
#include "Country.h"

class Countries {
private:
    QMap<int,Country> countries;
public:
    void addCountry(int index,Country country);
    void removeCountry(int id);
    void showCountries();
    void showOnlyCountries();
    void showCountryInRange(int min, int max);
    void removeCountryWhoseNameIs(QString name);
    void showCountriesByPopulation(int mode);

};

#endif //UNTITLED_COUNTRIES_H
