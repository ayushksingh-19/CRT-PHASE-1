#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;
};

class Stack {
private:
    Node* topNode;
    int count;

public:
    Stack() {
        topNode = NULL;
        count = 0;
    }

    void push(int val) {
        Node* temp = new Node();
        temp->data = val;
        temp->next = topNode;
        topNode = temp;
        count++;
    }

    void pop() {
        if (topNode == NULL) {
            cout << "Stack underflow" << endl;
            return;
        }

        Node* temp = topNode;
        topNode = topNode->next;
        delete temp;
        count--;
    }

    int top() {
        if (topNode == NULL) {
            cout << "Stack is empty" << endl;
            return -1;
        }

        return topNode->data;
    }

    int size() {
        return count;
    }

    bool isEmpty() {
        return topNode == NULL;
    }
};

int main() {
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Top element: " << s.top() << endl;
    cout << "Stack size: " << s.size() << endl;
    cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

    s.pop();

    cout << "Top element after pop: " << s.top() << endl;
    cout << "Stack size after pop: " << s.size() << endl;

    return 0;
}
