class ArrayStack {
private:
    int* array;
    int topIndex;
    int capacity;
public:
    ArrayStack(int size);
    ~ArrayStack();
    bool isFull();
    bool isEmpty();
    void push(int element);
    int pop();
    int top();
};