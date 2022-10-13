//
// Created by potrec on 12.10.2022.
//

#ifndef CW1_DEVELOPER_H
#define CW1_DEVELOPER_H


#include "Employee.h"


class Developer : public Employee {

private:
    float bonus;
    int lataPracy;
public:
    int getLataPracy() const;

    void setLataPracy(int lataPracy);

public:
    float getBonus() const;

    void setBonus(float bonus);
    Developer(string surname1, int age1, int experience1, int salary1);

    ~Developer();

    virtual int calculateSalary(int salary) override;
    virtual float calculateBonus(int value) override;
    virtual void show() override;
    int ageEmployment();
};


#endif //CW1_DEVELOPER_H
