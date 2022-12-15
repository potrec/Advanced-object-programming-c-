//
// Created by potrec on 14.12.2022.
//

#ifndef LAB10_BUFFERARR_H
#define LAB10_BUFFERARR_H


#include <iostream>
#include "Buffer.h"
#include <fstream>
#include <memory>

class BufferArr : public Buffer
{
private:
    int* arr;
    int size;
    int index;

public:
    BufferArr(int s) : size(s), index(0)
    {
        std::cout << "Konstruktor klasy BufferArr" << std::endl;
        arr = new int[size];
    }
    ~BufferArr()
    {
        std::cout << "Destruktor klasy BufferArr" << std::endl;
        delete[] arr;
    }

    int getSize() const { return size; }
    void setSize(int s) { size = s; }
    int getIndex() const { return index; }
    void setIndex(int i) { index = i; }

    void add(int a) override
    {
        if (index < size) {
            arr[index] = a;
            index++;
        } else {
            std::cout << "Nie mozna dodac elementu: "<< a <<" do tablicy, poniewaz jest ona pelna." << std::endl;
        }
    }

    void write() override
    {
        for (int i = 0; i < index; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
};


#endif //LAB10_BUFFERARR_H