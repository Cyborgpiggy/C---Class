#ifndef DOUBLYLINKEDLIST_H
#define DOUBLYLINKEDLIST_H

template <typename T>
class DoublyLinkedList {
public:
    struct Node { // Moved node to public since was having problems with it being private
        T data;
        Node* prev;
        Node* next;

        Node(const T& value) : data(value), prev(nullptr), next(nullptr) {}
    };

    Node* head;
    Node* tail;
    int size;
    //Constructor
    DoublyLinkedList();
    //Destructor 
    ~DoublyLinkedList();
    //Copy Constructor
    DoublyLinkedList(const DoublyLinkedList& other);

    void addFront(const T& value); //Adds a new value to the front of the list
    void addBack(const T& value); //Adds a new value to the back of the list
    void removeFront(); //Removes the value from the front of the list
    void removeBack(); //Removes the value from the back of the list
    bool empty() const; //Checks to see if the list is empty
    int getSize() const; //Gets the size of the list
};
template <typename T>
class SinglyDerivedList : public DoublyLinkedList<T> {
public:
    // Function to remove an element from the back 
    void removeBack() {
        if (this->empty()) {
            return;
        }

        // Traverse to the last node (tail) since we can't access the previous node
        typename DoublyLinkedList<T>::Node* current = this->head;
        while (current->next != nullptr) {
            current = current->next;
        }

        if (current == this->head) {
            this->head = nullptr;
        } else {
            current->prev->next = nullptr;
        }

        delete current;
        this->size--;
    }

};

template <typename T>
class DoublyDerivedList : public DoublyLinkedList<T> {
public:
    // Function to reverse the list
    void reverse() {
        if (this->empty() || this->head == this->tail) {
            return;
        }

        typename DoublyLinkedList<T>::Node* current = this->head;
        while (current != nullptr) {
            swap(current->prev, current->next);
            current = current->prev;
        }

        swap(this->head, this->tail);
    }

};

#endif /* DOUBLYLINKEDLIST_H */
