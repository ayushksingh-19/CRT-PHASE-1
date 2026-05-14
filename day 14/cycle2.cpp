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
    ListNode* detectCycle(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;

            if (slow == fast) {
                slow = head;
                while (slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }
                return slow;
            }
        }

        return NULL;
    }
};

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
    ListNode** nodes = new ListNode*[n];
    nodes[0] = head;

    for (int i = 1; i < n; i++) {
        cin >> value;
        tail->next = new ListNode(value);
        tail = tail->next;
        nodes[i] = tail;
    }

    int pos;
    cout << "Enter cycle position (-1 for no cycle): ";
    cin >> pos;

    if (pos >= 0 && pos < n) {
        tail->next = nodes[pos];
    }

    Solution obj;
    ListNode* cycleStart = obj.detectCycle(head);

    if (cycleStart != NULL) {
        cout << "Cycle starts at node with value: " << cycleStart->val << endl;
    } else {
        cout << "No cycle" << endl;
    }

    if (pos >= 0 && pos < n) {
        tail->next = NULL;
    }

    while (head != NULL) {
        ListNode* temp = head;
        head = head->next;
        delete temp;
    }

    delete[] nodes;

    return 0;
}
