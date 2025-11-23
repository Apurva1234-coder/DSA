#include <iostream>
using namespace std;
#define MAX 100

class stack {
private:
    int arr[MAX];
    int top;
public:
    stack() { 
        top = -1; 
    }

  void push(int val) {
        if (top == MAX - 1) {
            cout << "Stack is full\n";
        } else {
            arr[++top] = val;                 // increment first, then assign
            cout << val << " pushed into stack.\n";
        }
    }

    void pop() {
        if (top == -1) {
            cout << "Stack is empty\n";
        } else {
            cout << arr[top--] << " popped from stack.\n"; // print then decrement
        }
    }

    void traverse() {
        if (top == -1) {
            cout << "The stack is empty\n";
        } else {
            cout << "Stack elements (top to bottom): ";
            for (int i = top; i >= 0; i--)          // include index 0
                cout << arr[i] << " ";
            cout << "\n";
        }
    }
};

int main() {
    stack s;
    int choice, value;
    do {
        cout << "\nStack Operations Menu:\n";
        cout << "1. Push\n2. Pop\n3. Traverse\n4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) {
            case 1:
                cout << "Enter value to push: ";
                cin >> value;
                s.push(value);
                break;
            case 2:
                s.pop();
                break;
            case 3:
                s.traverse();
                break;
            case 4:
                cout << "Exiting...\n";
                break;
            default:
                cout << "Invalid choice\n";
        }
    } while (choice != 4);   // comparison, not assignment
    return 0;
}
