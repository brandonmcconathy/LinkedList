#include "linkedList.h"
#include <iostream>

Node::Node(int input) {
    val = input;
    next = nullptr;
 };


int LinkedList::Length() {
    return length;
};

int LinkedList::Peek() {
    if (length == 0) {
        return NULL;
    };
    return head->val;
};

int LinkedList::Tail() {
    if (length == 0) {
        return NULL;
    };
    return tail->val;
};

void LinkedList::Push(Node input) {
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

void LinkedList::Unshift(Node input) {
    if (length == 0) {
        head = &input;
        tail = &input;
    }
    else {
        Node* tempHead = head;
        head = &input;
        head->next = tempHead;
    }
    ++length;
};

void LinkedList::Pop() {
    if (length == 0) {
        return;
    }
    Node* newTail = head;
    for (int i = 0; i < length - 2; ++i) {
        newTail = newTail->next;
    }
    tail = newTail;
    tail->next = nullptr;
    --length;
};

void LinkedList::Shift() {
    if (length == 0) {
        return;
    }
    head = head->next;
    --length;
};

void LinkedList::PrintList() {
    if (length == 0) {
        std::cout << "List is empty" << std::endl;
    }
    else {
        Node* curr = head;
        for (int i = 0; i < length; i++) {
            std::cout << i << " curr: " << curr->val << std::endl;
            curr = curr->next;
        }
    };
};
