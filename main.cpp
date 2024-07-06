#include <iostream>
#include "linkedList.h"

int main(int argc, const char* argv[]) {

    LinkedList list;

    Node firstVal(10);
    Node secondVal(5);
    Node thirdVal(128);

    list.Push(firstVal);
    list.Push(Node(20));
    list.Push(secondVal);
    list.Push(thirdVal);
    list.PrintList();
    std::cout << "Item at index 2 is " << list.Get(2) << std::endl;

    list.Shift();
    list.PrintList();

    list.Unshift(Node(200));
    list.PrintList();

    list.Pop();
    list.PrintList();

    return 0;
}
