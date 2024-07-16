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