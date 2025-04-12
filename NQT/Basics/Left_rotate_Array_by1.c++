#include<bits/stdc++.h>
using namespace std;

vector<int>RotateArrayBy1(vector<int>arr,int n){
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    return arr;
}

int main(){
    int n = 5;
    vector<int>arr = {2,4,3,1,5};
    vector<int> rotatedArr = RotateArrayBy1(arr, n);
    for(int i:rotatedArr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}