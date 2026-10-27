#include <iostream>
using namespace std;

class node {
    public:
    int data;
    node *next;

    node(int x) {
        data = x;
        next = NULL;
    }
};

class queue {
    private:
    node *front;
    node *rear;

    public:

    queue(){
        front = rear = NULL;
    }

    int empty(void){
        if (front == NULL) {
            return 1;
        } else {
            return 0;
        }
    }

    int peek(void) {
        if (empty()) {
            cout << "\nQueue is empty";
            return -1;
        }
        return front->data;
    }

    void enqueue(int x) {
        node *p = new node(x);

        if (front == NULL) {
            front = p;
            rear = p;
        } else {
            rear->next = p;
            rear = p;
        }
    }

    int dequeue(void){
        if(empty()){
            cout<<"\nQueue is Empty";
            return -1;
        }

        int x = front->data;
        node *p = front;
        
        front = front->next;

        if(front == NULL){
            rear = NULL;
        }
        delete p;
        return x;
    }

    void display(void){
        node *q = front;
        cout<<"\n Queue elements: ";

        while (q != NULL){
            cout << " \t " << q->data;
            q = q-> next;
        }
    }
};

int main() {
    int x;
    queue q ;

    q.enqueue(10);
    q.enqueue(15);
    q.enqueue(50);
    q.enqueue(65);
    q.enqueue(25);
    q.enqueue(68);

    q.display();

    if(!q.empty()){
        x = q.dequeue();
        cout << "\n Removed: " <<x;
    }

    q.display();

    x = q.peek();
    cout << "\n Front element is: "<<x ;

    return 0;
}
