//
// Created by potrec on 15.12.2022.
//

#ifndef LAB10_NODE_H
#define LAB10_NODE_H

#include <iostream>
#include <memory>

#include <iostream>
#include <memory>

class Node
{
public:
    Node(int value) : value(value), next(nullptr), prev(nullptr) {}

    int value;
    std::shared_ptr<Node> next;
    std::shared_ptr<Node> prev;
};

class List
{
public:
    List() : head(nullptr), tail(nullptr) {}

    void addToFront(int value)
    {
        std::shared_ptr<Node> newNode = std::make_shared<Node>(value);

        if (head == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->next = head;
            head->prev = newNode;
            head = newNode;
        }
    }

    void addToBack(int value)
    {
        std::shared_ptr<Node> newNode = std::make_shared<Node>(value);

        if (tail == nullptr)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            newNode->prev = tail;
            tail->next = newNode;
            tail = newNode;
        }
    }

    void removeFromFront()
    {
        if (head == nullptr)
        {
            return;
        }
        else if (head == tail)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {head = head->next;
            head->prev = nullptr;
        }
    }

    void removeFromBack()
    {
        if (tail == nullptr)
        {
            return;
        }
        else if (head == tail)
        {
            head = nullptr;
            tail = nullptr;
        }
        else
        {
            tail = tail->prev;
            tail->next = nullptr;
        }
    }

    void display()
    {
        if (head == nullptr)
        {
            std::cout << "List is empty" << std::endl;
        }
        else
        {
            std::cout << "List: ";
            std::shared_ptr<Node> current = head;
            while (current != nullptr)
            {
                std::cout << current->value << " ";
                current = current->next;
            }
            std::cout << std::endl;
        }
    }

    bool isEmpty()
    {
        return head == nullptr;
    }

private:
    std::shared_ptr<Node> head;
    std::shared_ptr<Node> tail;
};

#endif //LAB10_NODE_H
