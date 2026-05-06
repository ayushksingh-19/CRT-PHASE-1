#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age >= 18) {
        cout << "eligible to vote";
    } else {
        cout << "underage";
    }

    return 0;
}
