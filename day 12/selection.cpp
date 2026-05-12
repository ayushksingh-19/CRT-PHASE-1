#include<iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void selectionSort(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int mini = i;

        for (int j = i + 1; j < n; j++) {
            if (nums[mini] > nums[j]) {
                mini = j;
            }
        }

        swapValues(nums[i], nums[mini]);
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

    selectionSort(nums, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
