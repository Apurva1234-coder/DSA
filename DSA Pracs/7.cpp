#include <iostream>
#define MAX 100
using namespace std;

class LinearQueue {
    int queue[MAX];
    int front, rear;

public:
    LinearQueue() {
        front = -1;
        rear = -1;
    }

    void enqueue(int value) {
        if (rear == MAX - 1) {
            cout << "Queue Overflow\n";
            return;
        }

        if (front == -1) {
            front = 0;
        }

        queue[++rear] = value;

        cout << value << " enqueued.\n";
    }

    void dequeue() {
        if (front == -1 || front > rear) {
            cout << "Queue Underflow\n";
            return;
        }

        cout << queue[front] << " dequeued.\n";
        front++;
    }

    void display() {
        if (front == -1 || front > rear) {
            cout << "Queue is empty.\n";
            return;
        }

        cout << "Queue elements: ";

        for (int i = front; i <= rear; i++) {
            cout << queue[i] << " ";
        }

        cout << "\n";
    }
};

int main() {
    cout << "Linear Queue:\n";

    LinearQueue lq;

    lq.enqueue(10);
    lq.enqueue(20);
    lq.display();
    lq.dequeue();
    lq.display();

    return 0;
}
