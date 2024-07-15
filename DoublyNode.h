#pragma once

struct DoublyNode {
    int val;
    DoublyNode* next;
    DoublyNode* prev;

    DoublyNode(int input);
};