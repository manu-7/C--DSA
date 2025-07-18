#include<iostream>
using namespace std;

void rotatearray(int arr[], int n) {
    int temp = arr[0];
    for(int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
}

int main() {
    int n = 5;
    int arr[] = {4, 5, 6, 7, 8};

    rotatearray(arr, n);

    cout << "Array after left rotation by one is -> ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
