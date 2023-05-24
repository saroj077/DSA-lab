#ifndef QueueLinkedList_h
#define QueueLinkedList_h

class QueueLinkedList {
private:
    struct Node {
        int data;
        Node* next;
    };

    Node* front;
    Node* rear;

public:
    QueueLinkedList();
    ~QueueLinkedList();

    bool isEmpty();
    void enqueue(int element);
    int dequeue();
    int getFront();
    int getRear();
};

#endif
