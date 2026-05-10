#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        string tmp;
        for(int i = 0;i<s.size();i++)
        {
            if('a' <= s[i] and s[i] <= 'z')
                tmp.push_back(s[i]);
            else if('A' <= s[i] and s[i] <= 'Z')
                tmp.push_back(s[i]+32);
            else if('0' <= s[i] and s[i] <= '9')
                 tmp.push_back(s[i]);
        }
        
        int n = tmp.size();
        for(int i = 0;i<n/2;i++)
        {
            if(tmp[i] !=  tmp[n-i-1])
                return false;
        }
        return true;
    }

    string reversePalindromeText(string s) {
        string tmp;
        for (int i = 0; i < s.size(); i++) {
            if ('a' <= s[i] && s[i] <= 'z')
                tmp.push_back(s[i]);
            else if ('A' <= s[i] && s[i] <= 'Z')
                tmp.push_back(s[i] + 32);
            else if ('0' <= s[i] && s[i] <= '9')
                tmp.push_back(s[i]);
        }

        reverse(tmp.begin(), tmp.end());
        return tmp;
    }
};

int main() {
    Solution obj;
    string s = "A man, a plan, a canal: Panama";

    cout << "Reverse text: " << obj.reversePalindromeText(s) << endl;

    if (obj.isPalindrome(s))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
