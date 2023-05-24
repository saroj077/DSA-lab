#ifndef QueueArray_h
#define QueueArray_h

class QueueArray {
private:
    int front;
    int rear;
    int size;
    int* array;

public:
    QueueArray(int size);
    ~QueueArray();

    bool isEmpty();
    bool isFull();
    void enqueue(int element);
    int dequeue();
    int getFront();
    int getRear();
};

#endif
