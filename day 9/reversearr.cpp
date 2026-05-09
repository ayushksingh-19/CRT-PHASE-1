#include<iostream>
using namespace std;

int main(){
    int arr[5] = {1, 2, 3, 4, 6,};
    int i = 0;
    int j = 4;

    while(i < j){
        int temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
        i++;
        j--;
    }

    i = 0;
    while(i < 5){
        cout << arr[i] << " ";
        i++;
    }

    return 0;
}
