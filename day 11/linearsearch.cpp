#include <iostream>
using namespace std;

int linearsearch(int nums[],int n,int target){

    //iterate
    //find key
    for(int i=0;i<n;i++){
        if(nums[i]==target)
        {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {2, 3, 4, 10, 40,80,90,65,45,77};
    int n = sizeof(arr) / sizeof(arr[0]);
    int x = 45;
    int res = linearsearch(arr, n, x);
    if (res == -1)
       cout << "Element is not present in the array";
    else
       cout << "Element is present at index " << res;
    return 0;
}

