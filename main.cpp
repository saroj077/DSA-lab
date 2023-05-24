#include <iostream>
#include "../include/QueueArray.h"
#include "../include/QueueLinkedList.h"

using namespace std;

int main() {
    // Queue using Array
    cout << "Queue using Array:" << endl;
    QueueArray q(5);

    q.enqueue(5);
    q.enqueue(7);
    q.enqueue(9);
    cout << "Front element: " << q.getFront() << endl;
    cout << "Back element: " << q.getRear() << endl;

    q.dequeue();
    cout << "Front element after dequeue: " << q.getFront() << endl;
    cout << "Back element after dequeue: " << q.getRear() << endl;

    q.enqueue(3);
    q.enqueue(0);
    cout << "Front element after enqueue: " << q.getFront() << endl;
    cout << "Back element after enqueue: " << q.getRear() << endl;

    // Queue using Linked List
    cout << endl << "Queue using Linked List:" << endl;
    QueueLinkedList ql;

    ql.enqueue(5);
    ql.enqueue(7);
    ql.enqueue(9);
    cout << "Front element: " << ql.getFront() << endl;
    cout << "Back element: " << ql.getRear() << endl;

    ql.dequeue();
    cout << "Front element after dequeue: " << ql.getFront() << endl;
    cout << "Back element after dequeue: " << ql.getRear() << endl;

    ql.enqueue(3);
    ql.enqueue(0);
    cout << "Front element after enqueue: " << ql.getFront() << endl;
    cout << "Back element after enqueue: " << ql.getRear() << endl;

    return 0;
}
