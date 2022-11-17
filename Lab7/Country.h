//
// Created by potrec on 16.11.2022.
//

#ifndef UNTITLED_COUNTRY_H
#define UNTITLED_COUNTRY_H


#include <QString>

class Country {
private:
    QString countryName;
public:
    Country(const QString &countryName, const QString &capitalName, int population, int area);

private:
    QString capitalName;
    int population;
    int area;
    int gdp;
public:
    const QString &getCountryName() const;

    void setCountryName(const QString &countryName);

    const QString &getCapitalName() const;

    void setCapitalName(const QString &capitalName);

    int getPopulation() const;

    void setPopulation(int population);

    int getArea() const;

    void setArea(int area);





};
#endif //UNTITLED_COUNTRY_H
