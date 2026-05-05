#include <iostream>
using namespace std;

void showNumber(int num = 10) {
    cout << "Number = " << num << endl;
}

int main() {
    int userNum;
    cin >> userNum;

    showNumber();
    showNumber(userNum);
    return 0;
}
