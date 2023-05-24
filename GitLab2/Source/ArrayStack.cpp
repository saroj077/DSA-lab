#include "../include/ArrayStack.h"
#include <iostream>
using namespace std;

ArrayStack::ArrayStack(int N) {
    capacity = N;
    array = new int[capacity];
    topIndex = -1;
}

ArrayStack::~ArrayStack() {
    delete[] array;
}

bool ArrayStack::isFull() {
    return topIndex == capacity - 1;
}

bool ArrayStack::isEmpty() {
    return topIndex == -1;
}

void ArrayStack::push(int element) {
    if (isFull()) {
        cout << "Stack is full" << endl;
        return;
    }
    topIndex++;
    array[topIndex] = element;
}

int ArrayStack::pop() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    int element = array[topIndex];
    topIndex--;
    return element;
}

int ArrayStack::top() {
    if (isEmpty()) {
        cout << "Stack is empty" << endl;
        return -1;
    }
    return array[topIndex];
}