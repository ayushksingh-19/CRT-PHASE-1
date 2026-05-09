#include <iostream>
using namespace std;

class sum {
public:
    int sumofarray(int arr[], int size) {
        int total = 0;

        for (int i = 0; i < size; i++) {
            total = total + arr[i];
        }

        return total;
    }
};

int main() {
    int arr[6] = {1, 2, 3, 4, 5, 6};
    sum obj;

    cout << obj.sumofarray(arr, 6);

    return 0;
}
