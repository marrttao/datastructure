#include "stack.h"

int main() {
    Stack stack;

    stack.push('A');
    stack.push('B');
    stack.push('C');

    cout << "Top element: " << stack.top() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Popped element: " << stack.pop() << endl;

    cout << "Top element: " << stack.top() << endl;

    stack.clear();
    cout << "Stack cleared." << endl;

    cout << "Popped element: " << stack.pop() << endl;
    for (int i = 0; i < 100; ++i) {
        stack.push('A');
    }
    cout << "Stack size after pushing 100 elements: " << stack.size() << endl;
    stack.clear();
    cout << "Stack cleared." << endl;
    for (int i = 0; i < 105; ++i) {
        stack.push('A');
    }

    cout << "Stack size after pushing 105 elements: " << stack.size() << endl;

    return 0;
}
