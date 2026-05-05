#include <iostream>
using namespace std;

void discount(float &amount) {
    amount = amount - (amount * 10 / 100);
}

int main() {
    float amount;
    cout << "enter amount:" << endl;
    cin >> amount;

    discount(amount);
    cout << "Amount after 10% discount = " << amount << endl;

    return 0;
}
