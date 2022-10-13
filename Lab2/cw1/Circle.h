//
// Created by potrec on 12.10.2022.
//

#ifndef CW1_CIRCLE_H
#define CW1_CIRCLE_H

class Circle : public Figure {
private:
    float r;
public:
    Circle(float r1);

    ~Circle();

    virtual void calculateArea() override;
    virtual void calculateCircuit() override;
};


#endif //CW1_CIRCLE_H
