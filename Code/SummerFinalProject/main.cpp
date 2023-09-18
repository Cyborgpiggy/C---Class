#include <iostream>
#include "DoublyLinkedList.h"
#include "DoublyLinkedList.cpp"

using namespace std;
int main() {
    DoublyLinkedList<int> list;

    list.addFront(3);
    list.addFront(2);
    list.addFront(1);

    list.addBack(4);
    list.addBack(5);

    cout << "Doubly Linked List Size: " << list.getSize() << endl;

    while (!list.empty()) {
        cout << list.getSize() << " ";
        list.removeBack();
    }

    cout << endl;

    SinglyDerivedList<int> sList;

    sList.addFront(3);
    sList.addFront(2);
    sList.addFront(1);

    sList.addBack(4);
    sList.addBack(5);

    cout << "Singly Derived List Size: " << sList.getSize() << endl;

    while (!sList.empty()) {
        cout << sList.getSize() << " ";
        sList.removeBack();
    }

    cout << endl;

    DoublyDerivedList<int> dList;

    dList.addFront(3);
    dList.addFront(2);
    dList.addFront(1);

    dList.addBack(4);
    dList.addBack(5);

    cout << "Doubly Derived List Size: " << dList.getSize() << endl;

    while (!dList.empty()) {
        cout << dList.getSize() << " ";
        dList.removeBack();
    }

    cout << endl;

    return 0;
}



