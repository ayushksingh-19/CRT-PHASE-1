#include <iostream>
using namespace std;

int main() {
    int age;
    cin >> age;

    if (age < 0) {
        cout << "invalid age";
    } else if (age > 100) {
        cout << "eligible to vote in century category";
    } else if (age >= 18 && age <= 99) {
        cout << "eligible to vote";
    } else {
        cout << "not eligible to vote";
    }

    return 0;
}
