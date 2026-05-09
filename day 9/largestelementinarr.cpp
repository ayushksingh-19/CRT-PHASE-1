#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int largest(vector<int>& arr) {
        int maxElement = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }

        return maxElement;
    }
};

int main() {
    vector<int> arr = {1, 8, 7, 56, 90};
    Solution obj;

    cout << obj.largest(arr);

    return 0;
}
