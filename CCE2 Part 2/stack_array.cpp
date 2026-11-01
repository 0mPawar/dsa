#include <iostream>
using namespace std;

// Stack implementation using a fixed-size array.
class StackArray {
private:
    static const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int topIndex;

public:
    StackArray() : topIndex(-1) {}

    bool isEmpty() const {
        return topIndex == -1;
    }

    bool isFull() const {
        return topIndex == MAX_SIZE - 1;
    }

    void push(int value) {
        if (isFull()) {
            cout << "Stack Overflow: stack is full.\n";
            return;
        }

        data[++topIndex] = value;
        cout << value << " pushed onto the stack.\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: stack is empty.\n";
            return;
        }

        cout << "Popped element: " << data[topIndex--] << '\n';
    }

    void peek() const {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Top element: " << data[topIndex] << '\n';
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Stack (top to bottom): ";
        for (int i = topIndex; i >= 0; --i) {
            cout << data[i] << ' ';
        }
        cout << '\n';
    }
};

int main() {
    StackArray stack;
    int choice, value;

    do {
        cout << "\n===== STACK USING ARRAY =====\n"
             << "1. Push\n2. Pop\n3. Peek\n4. Display\n0. Exit\n"
             << "Enter choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1:
                cout << "Enter value: ";
                if (cin >> value) stack.push(value);
                else {
                    cout << "Invalid value.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
                break;
            case 2: stack.pop(); break;
            case 3: stack.peek(); break;
            case 4: stack.display(); break;
            case 0: cout << "Exiting stack program.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
