//
// Created by potrec on 27.10.2022.
//

#ifndef LAB4_STUDENT_H
#define LAB4_STUDENT_H
#include <string>
using namespace std;


class Student {
private:
    int mark;
    string name;
public:
    Student(int mark, string name);

    int getMark();
};

#endif //LAB4_STUDENT_H
