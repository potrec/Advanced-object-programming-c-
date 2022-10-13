//
// Created by potrec on 12.10.2022.
//

#ifndef CW1_EMPLOYEE_H
#define CW1_EMPLOYEE_H

using namespace std;


class Employee {
private:
    string surname;
    int age;
    int experience;
    int salary;
public:
    Employee(string surname1, int age1, int experience1, int salary1);
    virtual ~Employee();
    int getAge();
    int getExperience();
    int getSalary();
    string getSurname();
    void setAge(int age1);
    void setExperience(int experience1);
    void setSalary(int salary1);
    void setSurname(string surname1);

    virtual int calculateSalary(int salary) = 0;
    virtual float calculateBonus(int value) = 0;
    int ageEmployee(int age);



    virtual void show();

};


#endif //CW1_EMPLOYEE_H
