#include "../include/ArrayStack.h"
#include "../include/LinkedListStack.h"
#include <iostream>
using namespace std;

void checkStack(ArrayStack& stack) {
    stack.push(7);
    stack.push(8);
    stack.push(9);
    cout <<"first pop element: "<<stack.pop() << endl; // 9
    cout <<"second pop element:"<<stack.pop() << endl; // 8
    cout <<"remaining top element:"<<stack.top() << endl; // 7
    cout <<"last pop element: "<<stack.pop() << endl; // 7
    cout <<"no element remaining: "<<stack.pop() << endl; //  Stack is empty
}

void checkStack(LinkedListStack& stack) {
    stack.push(1);
    stack.push(2);
    stack.push(3);
    cout <<"first pop element: "<<stack.pop() << endl; // 3
    cout <<"second pop element:"<<stack.pop() << endl; // 2
    cout <<"remaining top element:"<<stack.top() << endl; // 1
    cout <<"last pop element: "<<stack.pop() << endl; // 1
    cout <<"no element remaining: "<<stack.pop() << endl; // Stack is empty
}

int main() {
    ArrayStack ArrayStack(3);
    cout << "\nTesting StackArray:\n " << endl;
    checkStack(ArrayStack);

    LinkedListStack LinkedListStack;
    cout << "\nTesting StackLinkedList:\n " << endl;
    checkStack(LinkedListStack);

    return 0;
}