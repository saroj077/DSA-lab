#include "../include/LinkedListStack.h"
#include <iostream>
using namespace std;

LinkedListStack::LinkedListStack() {
    topNode = nullptr;
}

LinkedListStack::~LinkedListStack() {
    Node* current = topNode;
    while (current != nullptr) {
        Node* temp = current;
        current = current->next;
        delete temp;
    }
}

bool LinkedListStack::isEmpty() {
    return topNode == nullptr;
}

void LinkedListStack::push(int element) {
    Node* newNode = new Node;
    newNode->data = element;
    newNode->next = topNode;
    topNode = newNode;
}

int LinkedListStack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    int element = topNode->data;
    Node* temp = topNode;
    topNode = topNode->next;
    delete temp;
    return element;
}

int LinkedListStack::top() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return topNode->data;
}