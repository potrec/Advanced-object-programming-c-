//
// Created by potrec on 27.10.2022.
//

#include "Compare.h"

bool Compare::operator( )(Student &s1, Student &s2) {
    return s1.getMark() < s2.getMark();
}
