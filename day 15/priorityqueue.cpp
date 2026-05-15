
#include <iostream>
#include <queue>
using namespace std;

int main() {
    priority_queue<int> pq;

    pq.push(10);
    pq.push(30);
    pq.push(20);

    cout << "Top element: " << pq.top() << endl;
    cout << "Priority queue size: " << pq.size() << endl;
    cout << "Is priority queue empty? " << (pq.empty() ? "Yes" : "No") << endl;

    pq.pop();

    cout << "Top element after pop: " << pq.top() << endl;
    cout << "Priority queue size after pop: " << pq.size() << endl;

    return 0;
}
