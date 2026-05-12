#include<iostream>
using namespace std;

void swapValues(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool flag = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                swapValues(nums[j], nums[j + 1]);
                flag = true;
            }
        }

        if (!flag) {
            cout << "array is already sorted" << endl;
            break;
        }
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

    bubbleSort(nums, n);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

    return 0;
}
