//
// Created by potrec on 27.10.2022.
//

#include "City.h"
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>

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
    //Show city name
    cout << getCityName();


}

void City::women() {
    for (int i = 0; i < citizens.size(); i++) {
        if (citizens[i].getSex() == 'f') {
            cout << "Name: " << citizens[i].getName() << endl;
            cout << "Surname: " << citizens[i].getSurname() << endl;
            cout << "Age: " << citizens[i].getAge() << endl;
            cout << "Sex: " << citizens[i].getSex() << endl;
            cout << endl;
        }
    }
}


void City::city_citizens() {
    cout << "Liczba mieszkancow: " << this->citizens.size() << endl;
}
int City::City_size() {
    int size = this->citizens.size();
    return size;
}



void City::adults() {
    int j = 0;
    for (int i = 0; i < citizens.size(); i++) {
        if (citizens[i].getAge() >= 18) {
            j++;
        }
    }
    cout << "Liczba doroslych: " << j << endl;

}

void City::postal_codes() {
    vector<string> postal_codes;
    for (int i = 0; i < citizens.size(); i++) {
            postal_codes.push_back(citizens[i].getPostalCode());
    }
    sort(postal_codes.begin(), postal_codes.end());
//    for (int i = 0; i < postal_codes.size(); i++) {
//        cout << "Postal code: " << postal_codes[i] << endl;
//    }
    //Grouping
    int j = 0;
    for (int i = 0; i < postal_codes.size(); i++) {
        if (postal_codes[i] == postal_codes[i + 1]) {
            j++;
        } else {
            cout << "Postal code: " << postal_codes[i] << " Liczba: " << j + 1 << endl;
            j = 0;
        }
    }
}

string City::getCityName(){
    return city_name;
}

City::~City() {

}

City::City(const string &cityName) : city_name(cityName) {}

void City::kids() {
    int j = 0;
    for (int i = 0; i < citizens.size(); i++) {
        if (citizens[i].getAge() < 18) {
            j++;
        }
    }
    cout << "Liczba dzieci: " << j << endl;

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
