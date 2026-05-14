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
    ListNode* middleNode(ListNode* head) {
        ListNode* s1 = head;
        ListNode* s2 = head;

        while (s2 != nullptr && s2->next != nullptr) {
            s1 = s1->next;
            s2 = s2->next->next;
        }
        return s1;
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

    if (n <= 0) {
        cout << "List is empty" << endl;
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

    Solution obj;
    ListNode* middle = obj.middleNode(head);

    cout << "Middle node and remaining list: ";
    printList(middle);

    return 0;
}
