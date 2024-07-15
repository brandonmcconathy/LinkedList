#pragma once
#include "DoublyNode.h"

class DoublyLinkedList {
    DoublyNode* head = nullptr;
    DoublyNode* tail = nullptr;
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