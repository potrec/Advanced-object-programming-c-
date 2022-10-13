//
// Created by potrec on 12.10.2022.
//

#ifndef CW1_SQUARE_H
#define CW1_SQUARE_H

#include "Figure.h"

class Square : public Figure {
private:
    float a;
public:
    Square(float a1);

    ~Square();

    virtual void calculateArea() override;
    virtual void calculateCircuit() override;
    virtual void show() override;
};


#endif //CW1_SQUARE_H
