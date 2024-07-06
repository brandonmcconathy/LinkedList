#include "linkedList.h"
#include <iostream>

Node::Node(int input) {
    val = input;
    next = nullptr;
 };


// O(1)
int LinkedList::Length() {
    return length;
};

// O(1)
int LinkedList::Peek() {
    if (length == 0) {
        return NULL;
    };
    return head->val;
};

// O(1)
int LinkedList::Tail() {
    if (length == 0) {
        return NULL;
    };
    return tail->val;
};

// O(n)
int LinkedList::Get(int index) {
    if (length == 0 || index + 1 > length) {
        return NULL;
    }
    Node* currNode = head;
    for (int i = 0; i < index; ++i) {
        currNode = currNode->next;
    }
    return currNode->val;
};

// O(1)
void LinkedList::Push(int input) {
    Node* nodeInput = new Node(input);
    if (length == 0) {
        head = nodeInput;
        tail = nodeInput;
    }
    else {
        tail->next = nodeInput;
        tail = nodeInput;
    };
    length++;
};

// O(1)
void LinkedList::Unshift(int input) {
    Node* nodeInput = new Node(input);
    if (length == 0) {
        head = nodeInput;
        tail = nodeInput;
    }
    else {
        Node* tempHead = head;
        head = nodeInput;
        head->next = tempHead;
    }
    ++length;
};

// O(n)
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

// O(1)
void LinkedList::Shift() {
    if (length == 0) {
        return;
    }
    head = head->next;
    --length;
};

// O(n)
void LinkedList::Insert(int input, int index) {
    if (length == 0 || index >= length) {
        Push(input);
    }
    else if (index == 0) {
        Unshift(input);
    }
    else {
        Node* prevNode = head;
        for (int i = 0; i < index - 1; ++i)
        {
            prevNode = prevNode->next;
        }
        Node* newNode = new Node(input);
        newNode->next = prevNode->next;
        prevNode->next = newNode;
        ++length;
    }
};

// O(n)
void LinkedList::PrintList() {
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
};
