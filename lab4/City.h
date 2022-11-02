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
    string city_name;

public:
    explicit City(const string &cityName);
    string getCityName();
    virtual ~City();
    void setCityName(string cityName);
    void addCitizen(Citizen citizen);

    void deleteCitizen(string surname, int age);

    void show_citizens();

    void show_city();

    void women();

    void city_citizens();

    void adults();
    void kids();

    void postal_codes();
    int City_size();
};


#endif //LAB4_CITY_H
