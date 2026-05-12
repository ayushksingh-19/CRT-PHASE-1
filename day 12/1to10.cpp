#include<iostream>
using namespace std;

int findSum(int n) {
    if (n == 1) {
        return 1;
    }

    return n + findSum(n - 1);
}

int main() {
    int sum = findSum(10);

    cout << "Sum from 1 to 10 is: " << sum << endl;

    return 0;
}
