#include <iostream>
using namespace std;

class Queue {
private:
    int arr[100];
    int frontIndex;
    int rearIndex;

public:
    Queue() {
        frontIndex = 0;
        rearIndex = -1;
    }

    void enqueue(int val) {
        if (rearIndex == 99) {
            cout << "Queue overflow" << endl;
            return;
        }

        rearIndex++;
        arr[rearIndex] = val;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow" << endl;
            return;
        }

        frontIndex++;
    }

    int front() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return arr[frontIndex];
    }

    int size() {
        if (isEmpty()) {
            return 0;
        }

        return rearIndex - frontIndex + 1;
    }

    bool isEmpty() {
        return frontIndex > rearIndex;
    }
};

int main() {
    Queue q;

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);

    cout << "Front element: " << q.front() << endl;
    cout << "Queue size: " << q.size() << endl;
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    q.dequeue();

    cout << "Front element after dequeue: " << q.front() << endl;
    cout << "Queue size after dequeue: " << q.size() << endl;

    return 0;
}
