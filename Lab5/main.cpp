#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <map>
#include <string>
#include "Dictionary.h"


using namespace std;

void show(set<int> s) {
    set<int>::iterator itr;
    for (itr = s.begin(); itr != s.end(); itr++) {
        cout << *itr << " ";
    }
    cout << endl;
}

void listing_1() {
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(7);
    s.insert(3);
    show(s);
    s.erase(s.begin(), s.find(2));
    show(s);
    s.erase(2);
    cout << s.count(2) << endl;

}

//void listing_2() {
//    set<int> s1 = {1, 2, 3, 7};
//    set<int> s2 = {-2, 4, 1, 7, 6};
//    cout << "s1: ";
//    show(s1);
//    cout << "s2: ";
//    show(s2);
//    set<int> sUnion, sIntersec, sDiffer;
//    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sUnion, sUnion.begin()));
//    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sIntersec, sIntersec.begin()));
//    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sDiffer, sDiffer.begin()));
//    cout << "sUnion: ";
//    show(sUnion);
//    cout << "sIntersec: ";
//    show(sIntersec);
//    cout << "sDiffer: ";
//    show(sDiffer);
//
//}

void showMap(map<string, int> m) {
    cout << endl << "m: " << endl;
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); ++it) {
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
}

map<string, int>::iterator
searchByValue(map<string, int> &m, int val) {
    map<string, int>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
        if (it->second == val)
            break;

    return it;
}

int listing_3() {
    map<string, int> m;
    m.insert(pair<string, int>("Kowalski", 4500));
    m.insert(make_pair("Nowak", 2000));
    m["Adamek"] = 3000;
    showMap(m);
    int salary = m.find("Kowalski")->second;
    cout << "Zarobki Kowalskiego: " << salary << endl;
    m.erase("Adamek");
    showMap(m);
    cout << "Czy jest Kowalski? " << m.count("Kowalski") << endl;

    pair<string, int> el = *m.begin();
    cout << "Klucz: " << el.first << " " << "war: " << el.second << endl;

    map<string, int>::iterator it = searchByValue(m, 2000);
    if (it != m.end())
        cout << "Element znaleziony: " << it->first << " " <<
             it->second << endl;
    else
        cout << "Brak elementu" << endl;

    return 0;

}

int findDuplicate(vector<int> s) {
    set<int> s1;
    map<int,int> m;
    for (int i = 0; i < s.size(); i++) {
        cout << s[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < s.size(); i++) {
        if (s1.count(s[i]) == 1) {
            m.insert(pair<int, int>(s[i], i));
            cout << "Znaleziono duplikat: " << s[i] << endl;
        }
        else
            s1.insert(s[i]);
    }
    //suma elementów zbioru s1
    int sum = 0;
    set<int>::iterator it;
    for (it = s1.begin(); it != s1.end(); it++)
        sum += *it;
    cout << "Suma elementow zbioru: " << sum << endl;
    pair<int,int> el = *m.begin();
    return el.first;
}


void zadanie1() {
    vector<int> s = {1, 2, 3, 3 ,3, 3};
    cout << findDuplicate(s) << endl;
}

//void exclusiveAlternative(set<int>s1,set<int>s2){
//    set<int> sUnion, sIntersec, sDiffer;
//    set_union(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sUnion, sUnion.begin()));
//    set_intersection(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sIntersec, sIntersec.begin()));
//    set_difference(s1.begin(), s1.end(), s2.begin(), s2.end(), insert_iterator(sDiffer, sDiffer.begin()));
//    cout << "sUnion: ";
//    show(sUnion);
//    cout << "sIntersec: ";
//    show(sIntersec);
//    cout << "sDiffer: ";
//    show(sDiffer);
//}
void zadanie2() {
    set<int> s1 = {1, 2, 3, 7};
    set<int> s2 = {-2, 4, 1, 7, 6};
    cout << "s1: ";
    show(s1);
    cout << "s2: ";
    show(s2);
    //exclusiveAlternative(s1,s2);
}
string z3(string s1,string s2){
    string s3;
//    for (int i = 0; i < s2.length(); i++) {
//        cout << s2[i] << " ";
//        if (s1.find(s2[i]) == string::npos)
//            s3 += s2[i];
//    }
//    cout << endl;
    map<char,int> m;
    for (int i = 0; i < s2.length(); i++) {
        m.insert(make_pair(s2[i],i));
    }
    for (int i = 0; i < s2.length(); i++) {
        if (m.count(s1[i]) > 0) {
            cout << m.count(s1[i]) << s1[i] << " ";
        } else{
            s3 += s2[i];
        }
    }
    return s3;
}
void zadanie3(){
    cout<<z3("abc","cbaTg");
}
void zadanie4(){
    Dictionary d;
    d.addWord("kot","cat");
    d.addWord("pies","dog");
    d.showDictionary();
    d.addWord("kot","cat");
    d.showDictionary();
    d.deleteWord("kot");
    d.showDictionary();
    d.showTranslation("pies",1);
    d.showTranslation("dog",2);
    d.addWord("krowa","cow");
    d.addWord("kon","horse");
    d.addWord("swinia","pig");
    d.addWord("kura","chicken");
    d.addWord("kaczka","duck");
    d.addWord("aaaa","aaaa");
    d.addWord("bbbb","bbbb");
    d.addWord("cccc","cccc");
    d.addWord("dddd","addd");
    d.addWord("eeee","eeee");
    d.showDictionaryInOrder();

}
int main() {
//    listing_1();
//    listing_2();
//    listing_3();
//    zadanie1();
//    zadanie2();
    zadanie3();
//    zadanie4();
    return 0;
}

