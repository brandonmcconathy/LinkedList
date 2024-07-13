#include <iostream>
#include "Node.h"
#include "Stack.h"

int Stack::Length() {
    return length;
}

int Stack::Peek() {
    if (length == 0) {
        return NULL;
    }
    return head->val;
}

int Stack::Tail() {
    if (length == 0) {
        return NULL;
    }
    return tail->val;
}

void Stack::Push(int input) {
    Node* newNode = new Node(input);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    } else {
        tail->next = newNode;
        tail = newNode;
    }
    ++length;
}

int Stack::Pop() {
    if (length == 0) {
        return NULL;
    }
    Node* newTail = head;
    for (int i = 0; i < length - 2; ++i) {
        newTail = newTail->next;
    }
    tail = newTail;
    newTail->next = nullptr;
    --length;
}

void Stack::PrintList() {
    if (length == 0) {
        std::cout << "List is empty" << std::endl;
    }
    else {
        Node* curr = head;
        for (int i = 0; i < length; ++i) {
            std::cout << i << " curr: " << curr->val << std::endl;
            curr = curr->next;
        }
    };
}
