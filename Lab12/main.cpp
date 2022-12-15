#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
#include <tuple>
#include "Car.h"

using namespace std;

void zadanie1(void)
{
    // Stwórz vector i wypełnij go liczbami
    vector<int> numbers = {-3, 2, 4, -1, 6, 8, -2, 10};

    // Wyświetl elementy oddzielone znakiem |
    for (auto& number : numbers)
        cout << number << "|";
    cout << endl;

    // Oblicz średnią arytmetyczną elementów
    int sum = accumulate(numbers.begin(), numbers.end(), 0);
    int count = numbers.size();
    cout << "Srednia arytmetyczna: " << sum / count << endl;

    // Zlicz liczbę elementów parzystych
    int even_count = count_if(numbers.begin(), numbers.end(),
                              [](int x) { return x % 2 == 0; });
    cout << "Liczba elementow parzystych: " << even_count << endl;

    // Usuń ujemne elementy
    auto new_end = remove_if(numbers.begin(), numbers.end(),
                             [](int x) { return x < 0; });
    numbers.erase(new_end, numbers.end());

    // Posortuj elementy
    sort(numbers.begin(), numbers.end(),
         [](int x, int y) { return (x % 2 == 0) && (y % 2 != 0); });

    // Wyświetl elementy oddzielone znakiem |
    for (auto& number : numbers)
        cout << number << "|";
    cout << endl;

    // Nadpisz wartości elementów ich przeciwieństwami
    transform(numbers.begin(), numbers.end(), numbers.begin(),
              [](int x) { return -x; });

    // Wyświetl elementy oddzielone znakiem |
    for (auto& number : numbers)
        cout << number << "|";
    cout << endl;

    // Zlicz liczbe elementow mniejszych niz podany argument
    int argument = 5;
    int less_than_count = count_if(numbers.begin(), numbers.end(),
                                   [argument](int x) { return x < argument; });
    cout << "Liczba elementow mniejszych niz " << argument << ": "
         << less_than_count << endl;
}

void zadanie2(void)
{
    // Stwórz kontener przechowujący obiekty klasy Car
    vector<Car> cars = {
            Car("Fiat Punto", 2005, 1200),
            Car("Ford Focus", 2010, 1600),
            Car("Opel Astra", 2008, 2000),
            Car("Peugeot 307", 2007, 1800),
            Car("Renault Megane", 2009, 1600)
    };


    // Posortuj samochody rosnąco względem roku produkcji
    sort(cars.begin(), cars.end(),
         [](const Car& car1, const Car& car2) { return car1.getYear() < car2.getYear(); });

    // Wyświetl informacje o samochodach
    cout<<"Samochody rosnaco wzgledem roku produkcji:"<<endl;
    int counter = 1;
    for (const auto& car : cars) {
        cout << "Samochod " << counter << ":" << endl;
        car.display();
        cout << endl;
        counter++;
    }

    // Posortuj samochody malejąco względem pojemności silnika
    sort(cars.begin(), cars.end(),[](const Car& car1, const Car& car2) { return car1.getEngineCapacity() > car2.getEngineCapacity(); });

// Wyświetl informacje o samochodach
    cout<<endl<<" Samochody malejaco wzgledem pojemnosci silnika"<<endl;
    counter = 1;
    for (const auto& car : cars)
    {
        cout << "Samochod " << counter << ":" << endl;
        car.display();
        cout << endl;
        counter++;
    }
}

tuple<int, double, string> min_max_average(const vector<string>& strings)
{
    // Znajdź długość najkrótszego napisu
    auto minmax = minmax_element(strings.begin(), strings.end(),
                                 [](const string& s1, const string& s2) { return s1.size() < s2.size(); });
    int min_length = minmax.first->size();

    // Oblicz średnią długość napisów
    int sum = accumulate(strings.begin(), strings.end(), 0,
                         [](int total, const string& s) { return total + s.size(); });
    double average = static_cast<double>(sum) / strings.size();

    // Znajdź najdłuższy napis
    string max_string = *minmax.second;

    return make_tuple(min_length, average, max_string);
}


void zadanie3(void)
{
    vector<string> strings = {"abc", "defgh", "ij", "klmno", "pqrstuvwxyz"};

    // Wywołaj funkcję min_max_average i wyświetl jej wartości zwracane
    auto [min_length, average, max_string] = min_max_average(strings);
    cout << "Dlugosc najkrotszego napisu: " << min_length << endl;
    cout << "Srednia dlugosc napisow: " << average << endl;
    cout << "Najdluzszy napis:" << max_string << endl;

}

int main() {
    cout<<endl<<"Zadanie1"<<endl;
    zadanie1();
    cout<<endl<<"Zadanie2"<<endl;
    zadanie2();
    cout<<endl<<"Zadanie3"<<endl;
    zadanie3();
}
