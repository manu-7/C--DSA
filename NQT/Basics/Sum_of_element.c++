#include<iostream>
using namespace std;

int main(){
    int arr[] = {10, 67, 89, 78, 34, 2, 95};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i=0;i<n;i++){
        sum += arr[i];
    }
    cout<<"sum of elements in arr is:"<<sum<<endl;
}