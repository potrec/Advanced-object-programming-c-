//
// Created by potrec on 27.10.2022.
//

#ifndef LAB4_CITY_H
#define LAB4_CITY_H
#include <string>
#include <vector>
#include "Citizen.h"

using namespace std;



class City {
private:

    vector<Citizen> citizens;
    vector<string> city_name;
public:
    const vector<string> &getCityName() const;

    void setCityName(const vector<string> &cityName);

public:

    explicit City(const vector<string> &cityName);


    void addCitizen(Citizen citizen);

    void deleteCitizen(string surname, int age);

    void show_citizens();

    void show_city();

    void women();

    void city_citizens();

    void adults();

    void postal_codes();

//    void showCities(vector<City> cities);
//    void the_most(vector<City> cities, int mode);
//    void statistics(vector<City> cities);
//    void sort_cities(vector<City> &cities);


};


#endif //LAB4_CITY_H
