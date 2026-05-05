#include <iostream>
using namespace std;

void sum(int a, int b) {
    cout << "Sum = " << a + b << endl;
}

int main() {
    int x, y;
    cin >> x >> y;
    sum(x, y);
    return 0;
}
