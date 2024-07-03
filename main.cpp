#include "pch.h"
#include <iostream>

struct Node {
    int val;
    Node* next;

    Node(int input) {
        val = input;
        next = nullptr;
    };
};


class LinkedList {
    Node* head = nullptr;
    Node* tail = nullptr;
    int length = 0;

public:
    int Length() {
        return length;
    };

    int Peek() {
        if (length == 0) {
            return NULL;
        };
        return head->val;
    };

    int Tail() {
        if (length == 0) {
            return NULL;
        };
        return tail->val;
    };

    void Add(Node input) {
        if (length == 0) {
            head = &input;
            tail = &input;
        }
        else {
            tail->next = &input;
            tail = &input;
        };
        length++;
    };

    void PrintList() {
        if (length == 0) {
            std::cout << "List is empty\n";
        }
        else {
            Node* curr = head;
            for (int i = 0; i < length; i++) {
                std::cout << i << " curr: " << curr->val << "\n";
                curr = curr->next;
            }
        };
    };
};


int main(int argc, const char* argv[]) {

    LinkedList list;

    Node firstVal(10);
    Node secondVal(5);
    Node thirdVal(128);

    list.Add(firstVal);
    list.Add(secondVal);
    list.Add(thirdVal);

    list.PrintList();

    return 0;
}
