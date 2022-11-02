//
// Created by potrec on 27.10.2022.
//

#include "City.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

City::City(const vector<string> &cityName) : city_name(cityName) {
    this-> city_name = cityName;

}

void City::addCitizen(Citizen citizen) {
    citizens.push_back(citizen);
}

void City::deleteCitizen(string surname, int age) {
    for (int i = 0; i < citizens.size(); i++) {
        if (citizens[i].getSurname() == surname && citizens[i].getAge() == age) {
            citizens.erase(citizens.begin() + i);
        }
    }

}

void City::show_citizens() {
    for (int i = 0; i < citizens.size(); i++) {
        cout << "Name: " << citizens[i].getName() << endl;
        cout << "Surname: " << citizens[i].getSurname() << endl;
        cout << "Age: " << citizens[i].getAge() << endl;
        cout << "Sex: " << citizens[i].getSex() << endl;
        cout << "Postal code: " << citizens[i].getPostalCode() << endl;
        cout << endl;
    }
}

void City::show_city() {
    cout << citizens.getCityName() << endl;


}

void City::women() {
    for (int i = 0; i < citizens.size(); i++) {
        if (citizens[i].getSex() == 'f') {
            cout << "Name: " << citizens[i].getName() << endl;
            cout << "Surname: " << citizens[i].getSurname() << endl;
            cout << "Age: " << citizens[i].getAge() << endl
                 << endl;
        }
    }
}


void City::city_citizens() {
    for (int i = 0; i < citizens.size(); i++) {
        if (citizens[i].getPostalCode() == city_name[2]) {
            cout << "Name: " << citizens[i].getName() << endl;
            cout << "Surname: " << citizens[i].getSurname() << endl;
            cout << "Age: " << citizens[i].getAge() << endl
                 << endl;
        }
    }
}



void City::adults() {
    for (int i = 0; i < citizens.size(); i++) {
        if (citizens[i].getAge() >= 18) {
            cout << "Name: " << citizens[i].getName() << endl;
            cout << "Surname: " << citizens[i].getSurname() << endl;
            cout << "Age: " << citizens[i].getAge() << endl
                    << endl;
        }
    }

}

void City::postal_codes() {
    for (int i = 0; i < citizens.size(); i++) {
        cout << "Postal code: " << citizens[i].getPostalCode() << endl;
    }

}

const vector<string> &City::getCityName() const {
    return city_name;
}

void City::setCityName(const vector<string> &cityName) {
    city_name = cityName;
}

//void City::showCities(vector<City> cities) {
//    for (int i = 0; i < cities.size(); i++) {
//        cities[i].show_city();
//    }
//
//}
//
//void City::the_most(vector<City> cities, int mode) {
//
//}
//
//void City::statistics(vector<City> cities) {
//
//
//}
//
//void City::sort_cities(vector<City> &cities) {
//    for (int i = 0; i < cities.size(); i++) {
//        for (int j = 0; j < cities.size() - 1; j++) {
//            if (cities[j].citizens.size() > cities[j + 1].citizens.size()) {
//                swap(cities[j], cities[j + 1]);
//            }
//        }
//    }
//
//}
