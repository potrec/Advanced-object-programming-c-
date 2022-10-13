#include <iostream>
#include "Figure.h"
#include "Square.h"
#include "Circle.h"
#include "Employee.h"
#include "Developer.h"
#include "TeamLeader.h"

using namespace std;
void zadanie1();
void zadanie2();
void zadanie3();
void whoWorkMoreThan5Years(Employee *tab[], int size);
void howManyEarnLessThanMeanBonus(Employee *tab[], int size);

int main() {
//    Figure *f1 = new Square(4);
//    Figure *f2 = new Circle(2);
//    f1->calculateArea();
//    f1->show();
//    f2->calculateArea();
//    f2->show();
//    delete f1;
//    delete f2;
//
//    Figure *f3;
//    Square s1(4);
//    f3=&s1;
//    f3->calculateArea();
//    f3->show();


//    zadanie1();
//    zadanie2();
//      zadanie3();






    return 0;
}

void zadanie1() {
    //zadanie 1
    Figure *tab[3];
    tab[0] = new Square(4);
    tab[1] = new Square(2);
    tab[2] = new Circle(5);
    for (int i = 0; i < 3; i++) {
        tab[i]->calculateArea();
        tab[i]->calculateCircuit();
        tab[i]->show();
        delete tab[i];
    }
}

void zadanie2(){
    //zadanie 2;
    Developer *tab[3];
    tab[0] = new Developer("Kowalski", 30, 5, 3000);
    tab[0]->calculateSalary(1000);
    tab[0]->calculateBonus(1);
    tab[0]->show();
    TeamLeader *tab2[3];
    tab2[0] = new TeamLeader("Nowak", 40, 10, 5000);
    tab2[0]->calculateSalary(1000);
    tab2[0]->calculateBonus(1);
    tab2[0]->show();

}
void zadanie3(){
    Employee** employess;
    Employee** employess2;
    employess = new Employee*[3];
    for (int i = 0; i < 3; i++) {
        employess[i] = new Developer("Kowalski", 20, 2+i, 2000+i);


    }
    employess2 = new Employee*[3];
    for (int i = 0; i < 3; i++) {
        employess2[i] = new TeamLeader("Kowalski", 30, 10-i, 2000-i);
    }
    whoWorkMoreThan5Years(employess, 3);
    whoWorkMoreThan5Years(employess2, 3);
    howManyEarnLessThanMeanBonus(employess, 3);
    howManyEarnLessThanMeanBonus(employess2, 3);

}
void whoWorkMoreThan5Years(Employee *tab[], int size) {
    for (int i = 0; i < size; i++) {
        if (tab[i]->getExperience() > 5) {
            tab[i]->show();
        }
    }
}
void howManyEarnLessThanMeanBonus(Employee *tab[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += tab[i]->calculateBonus(1);
        tab[i]->show();
    }
    int mean = sum / size;
    int counter = 0;
    for (int i = 0; i < size; i++) {
        if (tab[i]->calculateBonus(1) < mean) {
            counter++;
        }
    }
    cout << "Liczba pracownikow ktorych premia jest mniejsza od sredniej premii: "<<mean<<" wynosi: " << counter << endl;
}
