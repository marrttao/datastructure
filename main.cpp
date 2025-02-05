#include "stack.h"

int main() {
    Stack stack;

    stack.push('A');
    stack.push('B');
    stack.push('C');

    cout << "Top element: " << stack.top() << endl;
    cout << "Stack size: " << stack.size() << endl;

    cout << "Popped element: " << stack.pop() << endl;
    cout << "Top element after pop: " << stack.top() << endl;
    cout << "Stack size after pop: " << stack.size() << endl;

    stack._delete(1);
    cout << "Top element after delete: " << stack.top() << endl;
    cout << "Stack size after delete: " << stack.size() << endl;

    stack.clear();
    cout << "Stack size after clear: " << stack.size() << endl;

    return 0;
}
