//
// Created by potrec on 27.10.2022.
//

#ifndef LAB4_EVEN_H
#define LAB4_EVEN_H


class Even {
private:
    int divider;
public:
    Even(int divider);

    bool operator( )(int x);
};


#endif //LAB4_EVEN_H
