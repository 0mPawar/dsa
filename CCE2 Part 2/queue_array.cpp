#include <iostream>
using namespace std;

// Linear queue implementation using a fixed-size array.
class QueueArray {
private:
    static const int MAX_SIZE = 100;
    int data[MAX_SIZE];
    int frontIndex;
    int rearIndex;

public:
    QueueArray() : frontIndex(-1), rearIndex(-1) {}

    bool isEmpty() const {
        return frontIndex == -1;
    }

    bool isFull() const {
        return rearIndex == MAX_SIZE - 1;
    }

    void enqueue(int value) {
        if (isFull()) {
            cout << "Queue Overflow: queue is full.\n";
            return;
        }

        if (isEmpty()) {
            frontIndex = 0;
        }

        data[++rearIndex] = value;
        cout << value << " inserted into the queue.\n";
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow: queue is empty.\n";
            return;
        }

        cout << "Deleted element: " << data[frontIndex] << '\n';

        if (frontIndex == rearIndex) {
            // Reset the queue after deleting its only element.
            frontIndex = rearIndex = -1;
        } else {
            ++frontIndex;
        }
    }

    void getFront() const {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Front element: " << data[frontIndex] << '\n';
    }

    void display() const {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue (front to rear): ";
        for (int i = frontIndex; i <= rearIndex; ++i) {
            cout << data[i] << ' ';
        }
        cout << '\n';
    }
};

int main() {
    QueueArray queue;
    int choice, value;

    do {
        cout << "\n===== QUEUE USING ARRAY =====\n"
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
