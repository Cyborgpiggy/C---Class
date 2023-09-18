#include "DoublyLinkedList.h"

template <typename T>
//Constuctor
DoublyLinkedList<T>::DoublyLinkedList() : head(nullptr), tail(nullptr), size(0) {}

template <typename T>
//Deconstuctor
DoublyLinkedList<T>::~DoublyLinkedList() {
    while (!empty()) {
        removeFront();
    }
}

template <typename T>
//Copy Constructor
DoublyLinkedList<T>::DoublyLinkedList(const DoublyLinkedList& other) : head(nullptr), tail(nullptr), size(0) {
    Node* current = other.head;
    while (current) {
        addBack(current->data);
        current = current->next;
    }
}
//Adds to the front of the list
template <typename T>
void DoublyLinkedList<T>::addFront(const T& value) {
    Node* newNode = new Node(value);

    if (empty()) {
        head = tail = newNode;
    } else {
        newNode->next = head;
        head->prev = newNode;
        head = newNode;
    }

    size++;
}
//Adds to the back of the list
template <typename T>
void DoublyLinkedList<T>::addBack(const T& value) {
    Node* newNode = new Node(value);

    if (empty()) {
        head = tail = newNode;
    } else {
        tail->next = newNode;
        newNode->prev = tail;
        tail = newNode;
    }

    size++;
}
//Removes the front of the list
template <typename T>
void DoublyLinkedList<T>::removeFront() {
    if (empty()) {
        return;
    }

    Node* temp = head;

    if (head == tail) {
        head = tail = nullptr;
    } else {
        head = head->next;
        head->prev = nullptr;
    }

    delete temp;
    size--;
}
//Removes the back of the list
template <typename T>
void DoublyLinkedList<T>::removeBack() {
    if (empty()) {
        return;
    }

    Node* temp = tail;

    if (head == tail) {
        head = tail = nullptr;
    } else {
        tail = tail->prev;
        tail->next = nullptr;
    }

    delete temp;
    size--;
}
//Checks to see if the list is empty
template <typename T>
bool DoublyLinkedList<T>::empty() const {
    return size == 0;
}
//Gets the size of the list
template <typename T>
int DoublyLinkedList<T>::getSize() const {
    return size;
}

