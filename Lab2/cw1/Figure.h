//
// Created by potrec on 12.10.2022.
//

#ifndef CW1_FIGURE_H
#define CW1_FIGURE_H


class Figure {
private:
    float area;
    float circuit;
public:
    Figure();
    virtual ~Figure();
    float getArea();
    float getCircuit();
    void setArea(float area1);
    void setCircuit(float circuit1);

    virtual void calculateArea() = 0;
    virtual void calculateCircuit() = 0;

    virtual void show();
};



#endif //CW1_FIGURE_H
