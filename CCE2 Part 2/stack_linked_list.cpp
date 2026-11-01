#include <iostream>
using namespace std;

// Stack implementation using a singly linked list.
class StackLinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    Node* topNode;

public:
    StackLinkedList() : topNode(nullptr) {}

    ~StackLinkedList() {
        while (topNode != nullptr) {
            Node* p = topNode;
            topNode = topNode->next;
            delete p;
        }
    }

    bool isEmpty() const {
        return topNode == nullptr;
    }

    void push(int value) {
        Node* p = new Node(value);
        p->next = topNode;
        topNode = p;
        cout << value << " pushed onto the stack.\n";
    }

    void pop() {
        if (isEmpty()) {
            cout << "Stack Underflow: stack is empty.\n";
            return;
        }

        Node* p = topNode;
        cout << "Popped element: " << p->data << '\n';
        topNode = topNode->next;
        delete p;
    }

    void peek() const {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Top element: " << topNode->data << '\n';
    }

    void display() const {
        if (isEmpty()) {
            cout << "Stack is empty.\n";
            return;
        }

        cout << "Stack (top to bottom): ";
        Node* q = topNode;
        while (q != nullptr) {
            cout << q->data << ' ';
            q = q->next;
        }
        cout << '\n';
    }
};

int main() {
    StackLinkedList stack;
    int choice, value;

    do {
        cout << "\n===== STACK USING LINKED LIST =====\n"
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
