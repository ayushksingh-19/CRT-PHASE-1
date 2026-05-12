#include<iostream>
using namespace std;

void insertionsort(int nums[],int n){
    for(int i=1;i<n;i++){
        int key=nums[i];
        int j=i-1;
        while(j>=0&&nums[j]>key){
            nums[j+1]=nums[j];
            j--;
        }
        
        nums[j+1]=key;

        
    }




}
int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int nums[100];
    cout << "Enter array elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    insertionsort(nums, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
