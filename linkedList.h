#pragma once
#include "Node.h"

class LinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;
    int length = 0;

public:
    int Length();

    int Peek();

    int Tail();

    int Get(int index);

    void Push(int input);

    void Unshift(int input);

    void Pop();

    void Shift();

    void Insert(int input, int index);

    void Delete(int index);
    
    void PrintList();
};