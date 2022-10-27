//
// Created by potrec on 27.10.2022.
//

#ifndef LAB4_CITIZEN_H
#define LAB4_CITIZEN_H

#include <string>
using namespace std;

class Citizen {
private:
public:
    string getName() const;

    void setName(const string &name);

    string getSurname() const;

    void setSurname(const string &surname);

    int getAge() const;

    void setAge(int age);

    char getSex() const;

    void setSex(char sex);

    string getPostalCode() const;

    void setPostalCode(const string &postalCode);

    void show();
private:
    string name;
    string surname;
    int age;
    char sex;
    string postal_code;

public:
    Citizen();

    Citizen(string name,string surname, int age, char sex, string postalCode);

};


#endif //LAB4_CITIZEN_H
