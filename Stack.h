#pragma once
#include "Node.h"

class Stack {
	Node* head = nullptr;
	Node* tail = nullptr;
	int length = 0;

public:
	int Length();
	int Peek();
	int Tail();
	void Push(int input);
	int Pop();
	void PrintList();
};