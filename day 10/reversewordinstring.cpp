#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {

        // STEP 1: Reverse the entire string
        reverse(s.begin(), s.end());

        // STEP 2: Reverse each individual word in-place
        int n = s.size();
        int start = 0;
        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') {
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1;
            }
        }

        // STEP 3: Clean spaces (leading, trailing, middle)
        int writePos = 0;
        int i = 0;
        while (i < n) {
            if (s[i] == ' ') { i++; continue; }
            if (writePos != 0) s[writePos++] = ' ';
            while (i < n && s[i] != ' ') {
                s[writePos++] = s[i++];
            }
        }

        s.resize(writePos);
        return s;
    }
};

int main() {
    Solution obj;
    string s;

    cout << "Enter a string: ";
    getline(cin, s);
    cout << "Reversed words: " << obj.reverseWords(s) << endl;

    return 0;
}
