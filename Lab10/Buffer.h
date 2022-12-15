//
// Created by potrec on 14.12.2022.
//

#ifndef LAB10_BUFFER_H
#define LAB10_BUFFER_H

#include <iostream>
#include <fstream>
#include <memory>

class Buffer {
public:
    Buffer() { std::cout << "Konstruktor Buffer" << std::endl; }
    virtual ~Buffer() { std::cout << "Destruktor Buffer" << std::endl; }
    virtual void add(int a) = 0;
    virtual void write() = 0;
};


#endif //LAB10_BUFFER_H
