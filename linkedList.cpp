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

void LinkedList::Add(Node input) {
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

void LinkedList::Slice() {
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
