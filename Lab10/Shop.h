//
// Created by potrec on 15.12.2022.
//

#ifndef LAB10_SHOP_H
#define LAB10_SHOP_H


#include <memory>
#include "Warehouse.h"

class Shop
{
private:
    std::string name;
    std::vector<std::shared_ptr<Warehouse>> warehouses;

public:
    Shop(const std::string& n) : name(n) {}
    ~Shop() { std::cout << "Destruktor klasy Shop" << std::endl; }

    std::string getName() const { return name; }
    void setName(const std::string& n) { name = n; }

    void addWarehouse(const std::shared_ptr<Warehouse>& w) { warehouses.push_back(w); }

    void sell(const std::string& item, int q)
    {
        for (const auto& warehouse : warehouses) {
            if (warehouse->getName() == item && warehouse->getQuantity() >= q) {
                warehouse->setQuantity(warehouse->getQuantity() - q);
                std::cout << "Sprzedano " << q << " sztuk towaru " << item << std::endl;
                return;
            }
        }

        std::cout << "Nie udalo sie sprzedac towaru " << item << std::endl;
    }

    void displayWarehouses() const
    {
        std::cout << "Sklep " << name << " korzysta z magazynow:" << std::endl;
        for (const auto& warehouse : warehouses) {
            warehouse->display();
        }
    }

    void displayName() const
    {
        std::cout << "Nazwa sklepu: " << name << std::endl;
    }
};



#endif //LAB10_SHOP_H
