//
// Created by potrec on 15.12.2022.
//
#include <iostream>
#include <vector>
#include <memory>

#ifndef LAB10_WAREHOUSE_H
#define LAB10_WAREHOUSE_H

class Warehouse
{
private:
    std::string name;
    int quantity;

public:
    Warehouse(const std::string& n, int q) : name(n), quantity(q) {}
    ~Warehouse() { std::cout << "Destruktor klasy Warehouse" << std::endl; }

    std::string getName() const { return name; }
    void setName(const std::string& n) { name = n; }
    int getQuantity() const { return quantity; }
    void setQuantity(int q) { quantity = q; }

    void display() const
    {
        std::cout << "Magazyn: " << name << ", liczba sztuk: " << quantity << std::endl;
    }
};


#endif //LAB10_WAREHOUSE_H
