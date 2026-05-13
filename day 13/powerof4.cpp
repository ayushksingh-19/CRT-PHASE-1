#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfFour(int n) {
        return n > 0 && (n & (n - 1)) == 0 && (n & 0x55555555) != 0;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;

    if (obj.isPowerOfFour(n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
