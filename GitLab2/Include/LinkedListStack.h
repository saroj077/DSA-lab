class LinkedListStack {
private:
    struct Node {
        int data;
        Node* next;
    };
    Node* topNode;
public:
    LinkedListStack();
    ~LinkedListStack();
    bool isEmpty();
    void push(int element);
    int pop();
    int top();
};