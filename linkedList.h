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

    void Add(Node input);

    void PrintList();
};