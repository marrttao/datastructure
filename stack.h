#ifndef STACK_H
#define STACK_H

#define DEFAULT_EMPTY_STACK_VALUE '\0'
#define DEFAULT_STACK_SIZE 100
#define DEFAULT_STACK_TOP_INDEX -1
#define STACK_FULL_MESSAGE "Stack is full. Cannot push character."
#define STACK_EMPTY_MESSAGE "Stack is empty. Cannot pop character."
#define STACK_DELETE_MESSAGE "Stack is empty. Cannot delete character."
#define STACK_EMPTY_MESSAGE_TOP "Stack is empty."
#define STACK_EMPTY_MESSAGE_CLEAR "Stack is empty."

#include <iostream>
using namespace std;

class Stack {
private:
    static const int MAX_SIZE = DEFAULT_STACK_SIZE;
    char data[MAX_SIZE] = { 0 }; 
    int topIndex;

public:
    Stack() : topIndex(DEFAULT_STACK_TOP_INDEX) {}

    void push(char value) {
        if (isFull()) {
            cout << STACK_FULL_MESSAGE << endl;
            return;
        }
        data[++topIndex] = value;
    }

    char pop() {
        if (isEmpty()) {
            cout << STACK_EMPTY_MESSAGE << endl;
            return DEFAULT_EMPTY_STACK_VALUE;
        }
        return data[topIndex--];
    }

    int size() const {
        return topIndex + 1;
    }

    bool isEmpty() const {
        return topIndex == DEFAULT_STACK_TOP_INDEX;
    }

    bool isFull() const {
        return topIndex == MAX_SIZE - 1;
    }

    void clear() {
        topIndex = DEFAULT_STACK_TOP_INDEX;
    }

    void _delete(int n) {
        if (isEmpty()) {
            cout << STACK_DELETE_MESSAGE << endl;
            return;
        }
        topIndex = topIndex - n;
    }

    char top() const {
        if (isEmpty()) {
            cout << STACK_EMPTY_MESSAGE_TOP << endl;
            return DEFAULT_EMPTY_STACK_VALUE;
        }
        return data[topIndex];
    }
};

#endif // STACK_H
