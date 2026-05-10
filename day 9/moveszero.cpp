#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        // move all the nonzero elements advance
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] != 0) {
                nums[j++] = nums[i];
            }
        }
        for (;j < nums.size(); j++) {
            nums[j] = 0;
        }
    }
};

int main() {
    vector<int> nums = {0, 1, 0, 3, 12};
    Solution obj;

    obj.moveZeroes(nums);

    for (int num : nums) {
        cout << num << " ";
    }

    return 0;
}
