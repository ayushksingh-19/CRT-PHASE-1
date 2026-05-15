#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Queue {
private:
    Node* frontNode;
    Node* rearNode;
    int count;

public:
    Queue() {
        frontNode = NULL;
        rearNode = NULL;
        count = 0;
    }

    void enqueue(int val) {
        Node* temp = new Node();
        temp->data = val;
        temp->next = NULL;

        if (rearNode == NULL) {
            frontNode = temp;
            rearNode = temp;
        } else {
            rearNode->next = temp;
            rearNode = temp;
        }

        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue underflow" << endl;
            return;
        }

        Node* temp = frontNode;
        frontNode = frontNode->next;

        if (frontNode == NULL) {
            rearNode = NULL;
        }

        delete temp;
        count--;
    }

    int front() {
        if (isEmpty()) {
            cout << "Queue is empty" << endl;
            return -1;
        }

        return frontNode->data;
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return frontNode == NULL;
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
