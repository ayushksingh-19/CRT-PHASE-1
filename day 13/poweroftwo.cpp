#include <iostream>
using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        return n > 0 && (n & (n - 1)) == 0;
    }
};

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    Solution obj;

    if (obj.isPowerOfTwo(n)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;
    }

    return 0;
}
