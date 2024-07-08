#pragma once
#include "Node.h"

class Queue {
	Node* head = nullptr;
	Node* tail = nullptr;
	int length = 0;

public:
	int Length();
	int Peek();
	int Tail();
	void Add(int input);
	void Remove();
	void PrintList();
};