//
// Created by 123lu on 15.12.2022.
//

#ifndef LAB12_CAR_H
#define LAB12_CAR_H

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class Car
{
    string model;
    int year;
    int engine_capacity;

public:
    // Konstruktor
    Car(const string& model, int year, int engine_capacity)
            : model(model), year(year), engine_capacity(engine_capacity)
    {
    }

    // Gettery
    const string& getModel() const { return model; }
    int getYear() const { return year; }
    int getEngineCapacity() const { return engine_capacity; }

    // Settery
    void setModel(const string& model) { this->model = model; }
    void setYear(int year) { this->year = year; }
    void setEngineCapacity(int engine_capacity) { this->engine_capacity = engine_capacity; }

    // Metoda wyświetlająca informację o samochodzie
    void display() const
    {
        cout << "Model: " << model << endl;
        cout << "Rok produkcji: " << year << endl;
        cout << "Pojemnosc silnika: " << engine_capacity << endl;
    }
};

#endif //LAB12_CAR_H
