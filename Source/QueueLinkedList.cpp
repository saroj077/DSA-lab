#include "../include/QueueLinkedList.h"
#include <iostream>
using namespace std;

// Constructor
QueueLinkedList::QueueLinkedList() {
    front = nullptr;
    rear = nullptr;
}

// Destructor
QueueLinkedList::~QueueLinkedList() {
    while(!isEmpty()) {
        dequeue();
    }
}

// Adds an element into the queue
void QueueLinkedList::enqueue(int element) {
    Node* newNode = new Node;
    newNode->data = element;
    newNode->next = nullptr;

    // If queue is empty
    if(isEmpty()) {
        front = newNode;
        rear = newNode;
    }
    else {
        rear->next = newNode;
        rear = newNode;
    }
}

// Removes an element from the queue
void QueueLinkedList::dequeue() {
    if(isEmpty()) {
        cout << "Queue is empty. Cannot dequeue." << endl;
    }
    else {
        Node* temp = front;
        front = front->next;
        delete temp;
    }
}

// Checks if the queue is empty
bool QueueLinkedList::isEmpty() {
    return front == nullptr;
}

// Checks if the queue is full
bool QueueLinkedList::isFull() {
    return false; // Linked list implementation cannot be full
}

// Gives the element at the front
int QueueLinkedList::getFront() {
    if(isEmpty()) {
        cout << "Queue is empty. No front element." << endl;
        return -1;
    }
    else {
        return front->data;
    }
}

// Gives the element at the rear
int QueueLinkedList::getRear() {
    if(isEmpty()) {
        cout << "Queue is empty. No rear element." << endl;
        return -1;
    }
    else {
        return rear->data;
    }
}
