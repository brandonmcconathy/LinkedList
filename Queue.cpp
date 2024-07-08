#include <iostream>
#include "Node.h"
#include "Queue.h"

int Queue::Length() {
    return length;
}

int Queue::Peek() {
    if (length == 0) {
        return NULL;
    }
	return head->val;
}

int Queue::Tail() {
    if (length == 0) {
        return NULL;
    }
	return tail->val;
}

void Queue::Add(int input) {
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

void Queue::PrintList() {
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