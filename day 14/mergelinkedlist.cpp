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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* curr1 = list1;
        ListNode* curr2 = list2;
        ListNode* dummyNode = new ListNode(-1);
        ListNode* temp = dummyNode;

        while (curr1 != NULL && curr2 != NULL) {
            if (curr1->val < curr2->val) {
                temp->next = curr1;
                temp = curr1;
                curr1 = curr1->next;
            } else {
                temp->next = curr2;
                temp = curr2;
                curr2 = curr2->next;
            }
        }

        if (curr1 != NULL) {
            temp->next = curr1;
        }
        if (curr2 != NULL) {
            temp->next = curr2;
        }

        ListNode* mergedHead = dummyNode->next;
        delete dummyNode;
        return mergedHead;
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

ListNode* createList(int n) {
    if (n <= 0) {
        return NULL;
    }

    int value;
    cin >> value;
    ListNode* head = new ListNode(value);
    ListNode* tail = head;

    for (int i = 1; i < n; i++) {
        cin >> value;
        tail->next = new ListNode(value);
        tail = tail->next;
    }

    return head;
}

int main() {
    int n1, n2;

    cout << "Enter number of nodes in first sorted list: ";
    cin >> n1;
    cout << "Enter values of first sorted list: ";
    ListNode* list1 = createList(n1);

    cout << "Enter number of nodes in second sorted list: ";
    cin >> n2;
    cout << "Enter values of second sorted list: ";
    ListNode* list2 = createList(n2);

    Solution obj;
    ListNode* mergedList = obj.mergeTwoLists(list1, list2);

    cout << "Merged linked list: ";
    printList(mergedList);

    while (mergedList != NULL) {
        ListNode* temp = mergedList;
        mergedList = mergedList->next;
        delete temp;
    }

    return 0;
}
