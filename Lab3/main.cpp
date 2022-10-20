#include <iostream>
#include "Adding.h"
#include "Student.h"
#include "Array.h"

using namespace std;

template<typename T>
void showAll(T *tab[], int n) {
    for (int i = 0; i < n; i++)
        tab[i]->show();
}
template<typename T>
void findMinimalElement(T *tab, int n) {
    T min = tab[0];
    for (int i = 1; i < n; i++) {
        if (tab[i] < min){
            min = tab[i];
        }
    }
    cout << "Minimal element: " << min << endl;
}

void zad2();
void zad3();

int main() {
//    Adding<int> a1(5);
//    a1.add(6);
//    a1.show();
//    Adding<string> a2("Pro");
//    a2.add("gramowanie");
//    a2.show();
//
//     Student<float> s(5,"Ala");
//     s.showMark();
//     Student<int> s1(5,"Ala");
//     s1.showMark();
//     Student<string> s2(5,"Ala");
//     s2.showMark();

//    Adding<int> *arrAdd[3];
//    for (int i = 0; i < 3; i++) {
//        arrAdd[i] = new Adding<int>(i);
//    }
//    showAll(arrAdd, 3);
//    Student<string> *arrStu[2];
//    for (int i = 0; i < 3; i++) {
//        arrStu[i] = new Student<string>(i + 2, "Ala");
//    }
//
//    showAll(arrStu, 3);
//    for (int i = 0; i < 3; i++)
//        delete arrAdd[i];
//    for (int i = 0; i < 2; i++)
//        delete arrStu[i];
//    zad2();
    zad3();
    return 0;
}

void zad2(){
    //zadanie 2
    srand(time(NULL));
    cout << "Podaj ilosc elementow: ";
    int n;
    cin >> n;
    int *tab = new int[n];
    //random generate tab
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 100;
    }
    cout << "Tablica int: " << endl;
    for (int i = 0; i < n; i++) {
        cout << tab[i] << endl;
    }
    cout << endl;
    findMinimalElement(tab, n);
    delete[] tab;
}
void zad3(){
//zadanie 3
    Array<int> a1(5);
    srand(time(NULL));
    cout << "Podaj ilosc elementow: ";
    int n;
    cin >> n;
    int *tab = new int[n];
    //random generate tab
    for (int i = 0; i < n; i++) {
        tab[i] = rand() % 100;
    }
    for (int i = 0; i < n; i++) {
        a1.addElement(tab[i]);
    }
    cout << "Przed sortowaniem: " << endl;
    a1.showArray();
    a1.sortArray();
    cout << "Po sortowaniu: " << endl;
    a1.showArray();
    cout << "Podaj index: ";
    int c;
    cin >> c;
    a1.showElement(c);

    Array<string> a2(5);
    a2.addElement("Ala");
    a2.addElement("ma");
    a2.addElement("kota");
    a2.addElement("i");
    a2.addElement("psa");
    cout << "Przed sortowaniem: " << endl;
    a2.showArray();
    a2.sortArray();
    cout << "Po sortowaniu: " << endl;
    a2.showArray();
    a2.showMaxElement();


}





