#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();

        int nSum = (n * (n + 1)) / 2;

        int sum = 0;

        for(int num : nums){
            sum += num;
        }

        return nSum - sum;
    }
};

int main() {
    Solution obj;
    vector<int> nums = {3, 0, 1};

    cout << "Missing number is " << obj.missingNumber(nums) << endl;

    return 0;
}
