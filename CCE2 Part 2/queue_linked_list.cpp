#include <iostream>
using namespace std;

// Queue implementation using a singly linked list.
class QueueLinkedList {
private:
    struct Node {
        int data;
        Node* next;

        Node(int value) : data(value), next(nullptr) {}
    };

    Node* frontNode;
    Node* rearNode;

public:
    QueueLinkedList() : frontNode(nullptr), rearNode(nullptr) {}

    ~QueueLinkedList() {
        while (frontNode != nullptr) {
            Node* p = frontNode;
            frontNode = frontNode->next;
            delete p;
        }
        rearNode = nullptr;
    }

    bool isEmpty() const {
        return frontNode == nullptr;
    }

    void enqueue(int value) {
        Node* p = new Node(value);

        if (isEmpty()) {
            frontNode = rearNode = p;
        } else {
            rearNode->next = p;
            rearNode = p;
        }

        cout << value << " inserted into the queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow: queue is empty.\n";
            return;
        }

        Node* p = frontNode;
        cout << "Deleted element: " << p->data << '\n';
        frontNode = frontNode->next;

        if (frontNode == nullptr) {
            rearNode = nullptr;
        }

        delete p;
    }

    void getFront() const {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Front element: " << frontNode->data << '\n';
    }

    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue (front to rear): ";
        Node* q = frontNode;
        while (q != nullptr) {
            cout << q->data << ' ';
            q = q->next;
        }
        cout << '\n';
    }
};

int main() {
    QueueLinkedList queue;
    int choice, value;

    do {
        cout << "\n===== QUEUE USING LINKED LIST =====\n"
             << "1. Enqueue\n2. Dequeue\n3. Front\n4. Display\n0. Exit\n"
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
                if (cin >> value) queue.enqueue(value);
                else {
                    cout << "Invalid value.\n";
                    cin.clear();
                    cin.ignore(10000, '\n');
                }
                break;
            case 2: queue.dequeue(); break;
            case 3: queue.getFront(); break;
            case 4: queue.display(); break;
            case 0: cout << "Exiting queue program.\n"; break;
            default: cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 0);

    return 0;
}
