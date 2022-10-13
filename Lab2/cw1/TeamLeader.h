//
// Created by potrec on 12.10.2022.
//

#ifndef CW1_TEAMLEADER_H
#define CW1_TEAMLEADER_H

#include <string>
#include "Employee.h"

using namespace std;

class TeamLeader : public Employee {

private:
    float bonus;
public:
    float getBonus() const;

    void setBonus(float bonus);

    TeamLeader(string surname1, int age1, int experience1, int salary1);

    ~TeamLeader();


    virtual int calculateSalary(int salary) override;
    virtual float calculateBonus(int value) override;

    virtual void show() override;
};

#endif //CW1_TEAMLEADER_H
