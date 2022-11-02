#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
#include "Even.h"
#include "Student.h"
#include "Compare.h"
#include "Citizen.h"
#include "City.h"
#include <time.h>

using namespace std;

template<typename T>
void show(T &con) {
    cout << "Container contains: ";
    for (typename T::iterator it = con.begin();
         it != con.end(); it++)
        cout << *it << " ";
    cout << endl;
}

void print(int &el) {
    cout << el << "***";
}

void add10(int &el) {
    el = el + 10;
}

bool isEven(int x) {
    if (x % 2 == 0)
        return true;
    else
        return false;
}

void showMark(Student &s) {
    cout << s.getMark() << " ";
}

void showCities(vector<City> c) {
    cout << "Miasta: " << endl;
    for (int i = 0; i < c.size(); i++) {
        cout << c[i].getCityName() << " ";
    }
}

void the_most(vector<City> c, int mode) {
    int max = 0;
    int index = 0;
    if (mode == 1) {
        for (int i = 0; i < c.size(); i++) {
            cout << "Miasto" << c[i].getCityName() << " ma:" << c[i].City_size() << " mieszkancow" << endl;
            if (c[i].City_size() > max) {
                max = c[i].City_size();
                index = i;
            }
        }
        cout << "Najwieksza liczba mieszkancow: " << c[index].getCityName() << endl;
    } else if (mode == 2) {
        int min = c[0].City_size();
        for (int i = 0; i < c.size(); i++) {
            cout << "Miasto" << c[i].getCityName() << " ma:" << c[i].City_size() << " mieszkancow" << endl;
            if (c[i].City_size() < min) {
                min = c[i].City_size();
                index = i;
            }
        }
        cout << "Najmniejsza liczba mieszkancow: " << c[index].getCityName() << endl;
    }
}

void statatistic(vector<City> c) {
//    funkcja wyświetlająca statystykę, dla każdego miasta:
//    nazwę miasta, liczbę mieszkańców tego miasta wraz z podziałem na liczbę kobiet oraz
//    mężczyzn, osób niepełnoletnich i pełnoletnich

    for (int i = 0; i < c.size(); i++) {
        cout << "Miasto: " << c[i].getCityName() << endl;
        cout << "Liczba mieszkancow: " << c[i].City_size() << endl;
        c[i].women();
        c[i].city_citizens();
        c[i].adults();
        c[i].kids();

    }
}

void sort_cities(vector <City> &c){
    for (int i = 0; i < c.size(); i++) {
        for (int j = 0; j < c.size() - 1; j++) {
            if (c[j].City_size() > c[j + 1].City_size()) {
                swap(c[j], c[j + 1]);
            }
        }
    }
}

void zad2() {
    vector<int> v;
    int n = rand() % 100;
    for (int i = 0; i < n; i++) {
        int x = rand() % 201 - 100;
        v.push_back(x);
    }
    show(v);
    sort(v.begin(), v.end(), greater<int>());
    show(v);
}

void zad3() {
    vector<City> cities;
    //Push 10 cities
    vector<string> cityname;
    City lublyn = City("Lublyn");
    cities.push_back(lublyn);
    City warsaw = City("Warsaw");
    cities.push_back(warsaw);


//    for (int i = 0; i < 10; i++) {
//        vector<string> city_name;
//        city_name.push_back("City");
//        city_name.push_back("Name");
//        city_name.push_back(to_string(i));
//        cities.push_back(City(city_name));
//    }
    srand(time(NULL));
    //Generate 100 citizens
    string * postal_codes = new string[100];
    for (int i = 0; i < 100; i++) {
        if(i < 30){
            postal_codes[i] = "20-100";
        } else if(i < 60){
            postal_codes[i] = "30-100";
        } else if(i < 90){
            postal_codes[i] = "40-100";
        } else{
            postal_codes[i] = "50-100";
        }
    }

    for (int i = 0; i < 100; i++) {
        string name = "Name" + to_string(i);
        string surname = "Surname" + to_string(i);
        int age = rand() % 100;
        char sex = rand() % 2 == 0 ? 'm' : 'f';
//        string postal_code = to_string(rand() % 10) + to_string(rand() % 10) + "-" + to_string(rand() % 10) +
//                             to_string(rand() % 10) +
//                             to_string(rand() % 10);
        Citizen citizen(name, surname, age, sex, postal_codes[i]);
        if (i % 3 == 0) {
            cities[1].addCitizen(citizen);
        } else {
            cities[0].addCitizen(citizen);
        }
    }

//    cities[0].show_city();
//    cities[0].show_citizens();
//    cities[1].show_city();
//    cities[1].show_citizens();
//    cout<<endl;
//    cout<<"Panie: "<<endl;
//    cities[1].women();
//    cities[1].city_citizens();
//    cities[1].adults();
//    showCities(cities);
//    showCities(cities);
//    the_most(cities, 1);
//    the_most(cities, 2);
      showCities(cities);
//    statatistic(cities);
//    sort_cities(cities);
//    cout<<endl;
//    showCities(cities);
        cities[0].postal_codes();
        cout<<endl;
        cities[1].postal_codes();


}


int main() {
    srand(time(NULL));
//    vector<int> vec;
//    vec.push_back(1);
//    vec.push_back(2);
//    vec.push_back(3);
//    cout << "Operator[]" << endl;
//    for (int i = 0; i < vec.size(); i++)
//        cout << vec[i] << " ";
//    cout << endl;
//    cout << "At" << endl;
//    for (int i = 0; i < vec.size(); i++)
//        cout << vec.at(i) << " ";
//    cout << endl;
//    cout << "Iterator: " << endl;
//    vector<int>::iterator it;
//    for (it = vec.begin(); it != vec.end(); it++)
//        cout << *it << " ";
//    cout << endl;
//    cout << "begin() " << *vec.begin() << " front() "
//         << vec.front() << endl;
//    cout << "end() " << *(vec.end() - 1) << " back() "
//         << vec.back() << endl;
//    return 0;
//
//    show(vec);
//    vec.pop_back();
//    show(vec);
//    vec.erase(vec.begin() + 1, vec.begin() + 2);
//    show(vec);
//    vec.insert(vec.begin() + 1, 100);
//    show(vec);
//    vec.clear();
//    show(vec);
//
//     vector<float>vec2(5,8.2);
//     show(vec2);
//     vec2.push_back(3.1);
//     show(vec2);

//    vector<int> num = {3, 6, 3, 8, 9, 1, 3};
//    show(num);
//    sort(num.begin(), num.end());
//    show(num);
//    cout << "binary search" << endl;
//    cout << binary_search(num.begin(), num.end(), 3) << endl;
//    cout << "count" << endl;
//    cout << count(num.begin(), num.end(), 3) << endl;
//    cout << "reverse" << endl;
//    reverse(num.begin(), num.begin() + 4);
//    show(num);
//    cout << "random_shuffle" << endl;
//    random_shuffle(num.begin(), num.end());
//    show(num);
//    cout << "max element" << endl;
//    cout << *max_element(num.begin(), num.end()) << endl;
//    cout << "merge" << endl;
//    vector<int> num2(4, 6);
//    vector<int> res(num.size() + num2.size());
//    sort(num.begin(), num.end());
//    merge(num.begin(), num.end(), num2.begin(),
//          num2.end(), res.begin());
//    show(res);
//
//    for_each(num.begin(), num.end(), print);
//    for_each(num.begin(), num.end(), add10);
//    cout << endl;
//    for_each(num.begin(), num.end(), print);
//    cout << endl;
//    cout << count_if(num.begin(), num.end(), isEven);

//    vector<int> num3 = {2, -6, 7, 3, 0, 8, -9, -2};
//    for_each(num3.begin(), num3.end(), print);
//    int howMany = count_if(num3.begin(), num3.end(),
//                           bind2nd(greater<int>(), 0));
//    cout << endl << "wersja1: wartosc > 0 " << howMany << endl;
//    greater<int> f;
//    howMany = count_if(num3.begin(), num3.end(),
//                       bind2nd(f, 0));
//    cout << "wersja2: wartosc > 0 " << howMany << endl;
//    cout << "Przed sortowaniem" << endl;
//    for_each(num3.begin(), num3.end(), print);
//    sort(num3.begin(), num3.end(), greater<int>());
//    cout << endl << "Po sortowaniu" << endl;
//    for_each(num3.begin(), num3.end(), print);

//    for_each(num.begin(), num.end(), print);
//    cout << endl;
//    cout << count_if(num.begin(), num.end(), isEven) << endl;
//    cout << count_if(num.begin(), num.end(), Even(2)) << endl;

//    for_each(num.begin(), num.end(), print);
//    cout << endl;
//    cout << "Even numbers: " << endl;
//    cout << count_if(num.begin(), num.end(), isEven )<< endl;
//    cout << count_if(num.begin(), num.end(), Even(2) )<< endl;

//    vector<Student> st;
//    st.push_back(Student(1, "Ala"));
//    st.push_back(Student(5, "Ola"));
//    st.push_back(Student(2, "Piotr"));
//    for_each(st.begin(), st.end(), showMark);
//    cout << endl;
//    sort(st.begin(), st.end(), Compare());
//    for_each(st.begin(), st.end(), showMark);

//     zad2();
    zad3();

}