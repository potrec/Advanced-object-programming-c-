#include <C:/boost_1_80_0/boost/bind.hpp>
#include <QCoreApplication>
#include <iostream>
#include <QVector>
using namespace std;
#include "CarCatalog.h"
#include "Car.h"
#include "Countries.h"

template<typename T>
void show(QVector<T> vec)
{
cout<<"Zawartosc vec: :";
typename QVector<T>::iterator p;
for (p = vec.begin(); p != vec.end(); ++p)
cout << *p<<" ";
cout<<endl;
}
void przyklad_qmap()
{
 QMap<int,QString> shops;
 shops[111]= "CCC";
 shops[222]= "Decathlon";
 shops.insert(333,"Reserved");
 QMapIterator<int,QString> j(shops);
 while(j.hasNext())
 {
 j.next();
 cout<<"Id: "<<j.key()<<" sklep: "
 << j.value().toStdString()<<endl;
 }
 QList<int> keys=shops.keys();
 QList<QString> values=shops.values();
 cout<<"Klucze: "<<endl;
 for(int i=0;i<keys.size();i++){
 cout<<keys[i]<<" ";
 }
 cout<<endl;
 QPair<QMap<int,QString>::iterator,QMap<int,QString>::
 iterator> range=shops.equal_range(111);
 cout<<"Wartosc, dla klucza 111: "
 <<range.first->toStdString()<<endl;
}
void przyklad_iteratory()
{
QVector<int> vec(6);
vec[0]=1;
vec[1]=2;
vec.append(2);
vec.push_back(4);
vec << 5 << 6 ;
cout<<"Zawartosc vec: :";
for(int i=0; i <vec.count(); ++i)
cout<<vec[i]<<" ";
cout<<endl<<"Zawartosc vec: :";
for(int i =0; i<vec.size(); ++i)
cout<< vec.at(i) << " ";
cout<<endl<<"Zawartosc vec: :";
QVectorIterator<int> i(vec);
while(i.hasNext())
cout << i.next()<<" ";
cout<<endl;
show(vec);
cout<<"Zawartosc vec: :";
QVector<int>::iterator p;
for (p = vec.begin(); p != vec.end(); ++p)
{
*p += 2;
cout<<*p<<" ";
}
cout<<endl;
vec.insert(1,666);
vec.insert(vec.begin(),777);
show(vec);
cout<< "Ostatni indeks gdzie 2: "
<<vec.lastIndexOf(2)<<endl;
vec.move(1,vec.length()-1);
vec.remove(3);
show(vec);
cout<<endl<<"Zawartosc vec: ";
QVectorIterator<int> it(vec);
while(it.hasNext())
cout << it.next()<<" ";
cout<<endl;
QMutableVectorIterator<int> itM(vec);
while(itM.hasNext())
{
itM.next();
itM.setValue(-1);
}
itM.toFront();
cout<<endl<<"Zawartosc vec: ";
while(itM.hasNext())
cout << itM.next()<<" ";

}

void zad1()
{
    cout<<"Zadanie 1"<<endl;
    CarCatalog catalog;
    catalog.addCar(1,Car("BMW", "X5", 2010, "JH4KA7654LC000001"));
    catalog.addCar(2,Car("BMW", "X6", 2011, "JH4KA7654LC000002"));
    catalog.addCar(3,Car("BMW", "X7", 2012, "JH4KA7654LC000003"));
    catalog.addCar(4,Car("BMW", "X8", 2013, "JH4KA7654LC000004"));
    catalog.addCar(5,Car("Audi", "A5", 2014, "JH4KA7654LC000005"));
    catalog.addCar(6,Car("Audi", "A6", 2015, "JH4KA7654LC000006"));
    catalog.addCar(7,Car("Audi", "A4", 2009, "JH4KA7654LC000007"));
    catalog.showCars();
    cout<<"Ilosc samochodow starszych niz 2012: "<<catalog.countCarsOlderThan(2012)<<endl;
    catalog.removeCarsByVin("JH4KA7654LC000001");
    catalog.showCars();
    cout<<"Ilosc samochodow starszych niz 2012: "<<catalog.countCarsOlderThan(2012)<<endl;
    catalog.showCarsInOrder(1);
    //catalog.showCarsInOrder(2);


}
void zad2(string word)
{
    cout<<"Zadanie 2"<<endl;
    QSet<char> set;
    for(int i=0;i<word.length();i++)
    {
        if(word[i]>='a' && word[i]<='z') {
            set.insert(word[i]);
        }
    }
    cout<<"Ilosc liter w zdaniu: "<<set.size()<<endl;
    if(set.size()==26)
    {
        cout<<"Zdanie jest pangramem"<<endl;
    }
    else
    {
        cout<<"Zdanie nie jest pangramem"<<endl;
    }
}

void zad3(){
    cout<<"Zadanie 3"<<endl;
    Countries countries;
    countries.addCountry(1,Country("Polska", "Warszawa", 38000000, 312679));
    countries.addCountry(2,Country("Niemcy", "Berlin", 83000000, 357021));
    countries.addCountry(3,Country("Francja", "Paryz", 67000000, 643801));
    countries.addCountry(4,Country("Wielka Brytania", "Londyn", 66000000, 243610));
    countries.addCountry(5,Country("Hiszpania", "Madryt", 47000000, 505990));

    countries.showCountries();
    countries.showOnlyCountries();
    cout<<"Wyswietlenie krajow w podanym zasiegu";
    countries.showCountryInRange(67000000, 1000000000);
    cout<<"Usuniecie kraju "<<std::endl;
    countries.removeCountryWhoseNameIs("Polska");
    countries.showCountries();
    cout<<"Wyswietlenie krajow wg populacji rosnace"<<std::endl;
    countries.showCountriesByPopulation(1);
    //cout<<"Wyswietlenie krajow wg populacji malejace"<<std::endl;
    //countries.showCountriesByPopulation(2);



}

int main(int argc, char *argv[])
{
    //zad1();
    //    zad2("The quick brown fox jumps over the lazy dogaaaaaaaaaaaaaaaaaa");
    //    zad2("abcdefghijklmnopqrstuvwxyz");
    //    zad2("The quick brown fox jumps over the lazy do");

    zad3();

}
