#include <iostream>
#include "linkedList.h"

int main(int argc, const char* argv[]) {

    LinkedList list;

    Node firstVal(10);
    Node secondVal(5);
    Node thirdVal(128);

    list.Add(firstVal);
    list.Add(secondVal);
    list.Add(thirdVal);

    list.PrintList();

    return 0;
}
