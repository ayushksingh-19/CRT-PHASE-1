#include <iostream>
using namespace std;

class Node {
public:
    int data;
    int priority;
    Node* next;
};

class PriorityQueue {
private:
    Node* frontNode;
    int count;

public:
    PriorityQueue() {
        frontNode = NULL;
        count = 0;
    }

    void enqueue(int val, int pr) {
        Node* temp = new Node();
        temp->data = val;
        temp->priority = pr;
        temp->next = NULL;

        if (frontNode == NULL || pr > frontNode->priority) {
            temp->next = frontNode;
            frontNode = temp;
        } else {
            Node* current = frontNode;
            while (current->next != NULL && current->next->priority >= pr) {
                current = current->next;
            }
            temp->next = current->next;
            current->next = temp;
        }

        count++;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Priority queue underflow" << endl;
            return;
        }

        Node* temp = frontNode;
        frontNode = frontNode->next;
        delete temp;
        count--;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Priority queue is empty" << endl;
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

    void display() {
        if (isEmpty()) {
            cout << "Priority queue is empty" << endl;
            return;
        }

        Node* current = frontNode;
        while (current != NULL) {
            cout << "(" << current->data << ", priority " << current->priority << ") ";
            current = current->next;
        }
        cout << endl;
    }
};

int main() {
    PriorityQueue pq;

    pq.enqueue(10, 1);
    pq.enqueue(20, 3);
    pq.enqueue(30, 2);

    cout << "Priority queue elements: ";
    pq.display();

    cout << "Top element: " << pq.peek() << endl;
    cout << "Priority queue size: " << pq.size() << endl;
    cout << "Is priority queue empty? " << (pq.isEmpty() ? "Yes" : "No") << endl;

    pq.dequeue();

    cout << "After dequeue: ";
    pq.display();
    cout << "Top element after dequeue: " << pq.peek() << endl;
    cout << "Priority queue size after dequeue: " << pq.size() << endl;

    return 0;
}
