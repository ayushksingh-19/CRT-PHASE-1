#include <iostream>
using namespace std;

class ListNode {
public:
    int val;
    ListNode* next;

    ListNode(int x) {
        val = x;
        next = NULL;
    }
};

class Solution {
public:
    void deleteNode(ListNode* node) {
        if (node == NULL || node->next == NULL) {
            return;
        }

        ListNode* temp = node->next;
        node->val = temp->val;
        node->next = temp->next;
        delete temp;
    }
};

void printList(ListNode* head) {
    while (head != NULL) {
        cout << head->val;
        if (head->next != NULL) {
            cout << " ";
        }
        head = head->next;
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of nodes: ";
    cin >> n;

    if (n <= 1) {
        cout << "Need at least 2 nodes to perform delete operation" << endl;
        return 0;
    }

    int value;
    cout << "Enter node values: ";
    cin >> value;

    ListNode* head = new ListNode(value);
    ListNode* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> value;
        tail->next = new ListNode(value);
        tail = tail->next;
    }

    int position;
    cout << "Enter position to delete (0-based, not last node): ";
    cin >> position;

    if (position < 0 || position >= n - 1) {
        cout << "Invalid position for this delete operation" << endl;
        printList(head);
        return 0;
    }

    ListNode* nodeToDelete = head;
    for (int i = 0; i < position; i++) {
        nodeToDelete = nodeToDelete->next;
    }

    Solution obj;
    obj.deleteNode(nodeToDelete);

    cout << "Linked list after deletion: ";
    printList(head);

    while (head != NULL) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    return 0;
}
