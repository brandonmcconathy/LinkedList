#include <iostream>
#include "linkedList.h"
#include "Queue.h"

int main(int argc, const char* argv[]) {

    LinkedList list;

    list.Push(10);
    list.Push(20);
    list.Push(5);
    list.Push(128);
    list.PrintList();
    std::cout << "Item at index 2 is " << list.Get(2) << std::endl;

    list.Shift();
    list.PrintList();

    list.Unshift(200);
    list.PrintList();

    list.Pop();
    list.PrintList();

    list.Insert(1000, 2);
    list.PrintList();

    list.Delete(1);
    list.PrintList();

    std::cout << "Head is " << list.Peek() << std::endl;
    std::cout << "Tail is " << list.Tail() << std::endl;

    std::cout << "\nQueue:" << std::endl;

    Queue queue;

    queue.Add(5);
    queue.Add(20);
    queue.Add(2);
    queue.Add(250);
    std::cout << "Length: " << queue.Length() << std::endl;
    queue.PrintList();

    queue.Remove();
    queue.PrintList();

    std::cout << "Head is " << queue.Peek() << std::endl;
    std::cout << "Tail is " << queue.Tail() << std::endl;

    return 0;
}
