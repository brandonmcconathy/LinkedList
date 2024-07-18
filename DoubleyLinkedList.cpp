#include <iostream>
#include "DoublyNode.h"
#include "DoublyLinkedList.h"

// O(1)
int DoublyLinkedList::Length() {
    return length;
};

// O(1)
int DoublyLinkedList::Peek() {
    if (length == 0) {
        return NULL;
    };
    return head->val;
};

// O(1)
int DoublyLinkedList::Tail() {
    if (length == 0) {
        return NULL;
    };
    return tail->val;
};

void DoublyLinkedList::Push(int input) {
    DoublyNode* newNode = new DoublyNode(input);
    if (length == 0) {
        head = newNode;
        tail = newNode;
    }
    else {
        DoublyNode* tempTail = tail;
        tail->next = newNode;
        tail = newNode;
        tail->prev = tempTail;
    }
};