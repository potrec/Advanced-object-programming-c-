#include <iostream>
#include <string>
#include <vector>
#include <memory>
#include "Buffer.h"
#include "BufferArr.h"
#include "BufferFile.h"
#include "Warehouse.h"
#include "Shop.h"
#include "Node.h"

void zadanie1(void)
{
    std::unique_ptr<Buffer> buffers[6];

    buffers[0] = std::make_unique<BufferArr>(3);
    buffers[1] = std::make_unique<BufferArr>(4);
    buffers[2] = std::make_unique<BufferArr>(5);
    buffers[3] = std::make_unique<BufferFile>("buf1.txt");
    buffers[4] = std::make_unique<BufferFile>("buf2.txt");
    buffers[5] = std::make_unique<BufferFile>("buf3.txt");

    buffers[0]->add(1);
    buffers[0]->add(2);
    buffers[0]->add(3);
    buffers[0]->add(4);
    buffers[0]->write();

    buffers[1]->add(5);
    buffers[1]->add(6);
    buffers[1]->add(7);
    buffers[1]->add(8);
    buffers[1]->add(9);
    buffers[1]->write();

    buffers[2]->add(10);
    buffers[2]->add(11);
    buffers[2]->add(12);
    buffers[2]->add(13);
    buffers[2]->add(14);
    buffers[2]->add(15);
    buffers[2]->write();

    buffers[3]->add(16);
    buffers[3]->add(17);
    buffers[3]->add(18);
    buffers[3]->write();

    buffers[4]->add(19);
    buffers[4]->add(20);
    buffers[4]->add(21);
    buffers[4]->write();

    buffers[5]->add(22);
    buffers[5]->add(23);
    buffers[5]->add(24);
    buffers[5]->write();
}

void zadanie2(void)
{
    //In this code, a vector of unique pointers to Shop objects is created. Three Shop objects are then created and added to the vector using std::make_unique.
    std::vector<std::unique_ptr<Shop>> shops;

    shops.push_back(std::make_unique<Shop>("Sklep 1"));
    shops.push_back(std::make_unique<Shop>("Sklep 2"));
    shops.push_back(std::make_unique<Shop>("Sklep 3"));

    //Next, three Warehouse objects are created and shared using std::shared_ptr. These shared pointers are then passed to the addWarehouse method of the Shop objects to add the warehouses to the shops.

    std::shared_ptr<Warehouse> w1 = std::make_shared<Warehouse>("Ksiazki", 10);
    std::shared_ptr<Warehouse> w2 = std::make_shared<Warehouse>("Komputery", 5);
    std::shared_ptr<Warehouse> w3 = std::make_shared<Warehouse>("Lozka", 2);

    shops[0]->addWarehouse(w1);
    shops[0]->addWarehouse(w2);

    shops[1]->addWarehouse(w1);
    shops[1]->addWarehouse(w3);

    shops[2]->addWarehouse(w2);

    //The displayName and displayWarehouses methods are then called on each of the Shop objects to print their names and the warehouses they use.
    shops[0]->displayName();
    shops[0]->displayWarehouses();

    shops[1]->displayName();
    shops[1]->displayWarehouses();

    shops[2]->displayName();
    shops[2]->displayWarehouses();

    //Finally, the sell method is called on each of the Shop objects to simulate selling different items from their warehouses.

    shops[0]->sell("Ksiazki", 5);
    shops[0]->sell("Komputery", 2);
    shops[0]->sell("Lozka", 1);

    shops[1]->sell("Ksiazki", 7);
    shops[1]->sell("Komputery", 2);
    shops[1]->sell("Lozka", 1);

    shops[2]->sell("Ksiazki", 1);
    shops[2]->sell("Komputery", 3);
    shops[2]->sell("Lozka", 1);

    //Overall, this code creates three Shop objects and adds them to a vector. It also creates three Warehouse objects and assigns them to the Shop objects. The Shop objects are then used to display their names and the warehouses they use, as well as simulate selling items from their warehouses.
}

void zadanie3(void)
{
    List list;

    list.addToFront(20);
    list.addToFront(10);
    list.addToBack(30);
    list.addToBack(40);

    list.display();

    list.removeFromFront();
    list.removeFromBack();

    list.display();

    if (list.isEmpty())
    {
        std::cout << "List is empty" << std::endl;
    }
    else
    {
        std::cout << "List is not empty" << std::endl;
    }
}

int main()
{
    //zadanie1();
    //zadanie2();
    zadanie3();

}