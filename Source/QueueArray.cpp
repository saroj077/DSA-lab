#include "../include/QueueArray.h"

QueueArray::QueueArray(int size) {
    this->front = -1;
    this->rear = -1;
    this->size = size;
    this->array = new int[size];
}

QueueArray::~QueueArray() {
    delete[] array;
}

bool QueueArray::isEmpty() {
    return front == -1 && rear == -1;
}

bool QueueArray::isFull() {
    return rear == size - 1;
}

void QueueArray::enqueue(int element) {
    if (isFull()) {
        throw "Queue is full";
    } else if (isEmpty()) {
        front = 0;
        rear = 0;
    } else {
        rear++;
    }

    array[rear] = element;
}

int QueueArray::dequeue() {
    if (isEmpty()) {
        throw "Queue is empty";
    } else if (front == rear) {
        int element = array[front];
        front = -1;
        rear = -1;
        return element;
    } else {
        int element = array[front];
        front++;
        return element;
    }
}

int QueueArray::getFront() {
    if (isEmpty()) {
        throw "Queue is empty";
    }

    return array[front];
}

int QueueArray::getRear() {
    if (isEmpty()) {
        throw "Queue is empty";
    }

    return array[rear];
}
