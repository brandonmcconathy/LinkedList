#pragma once

struct Node {
    int val;
    Node* next;

    Node(int input);
};


class LinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;
    int length = 0;

public:
    int Length();

    int Peek();

    int Tail();

    int Get(int index);

    void Push(Node input);

    void Unshift(Node input);

    void Pop();

    void Shift();
    
    void PrintList();
};