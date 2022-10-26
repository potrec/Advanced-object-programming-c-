//
// Created by potrec on 27.10.2022.
//

#ifndef LAB4_COMPARE_H
#define LAB4_COMPARE_H
#include "Student.h"

class Compare {
public:
    bool operator( )(Student &s1, Student &s2);
};


#endif //LAB4_COMPARE_H
