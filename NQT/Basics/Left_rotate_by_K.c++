#include<bits/stdc++.h>
using namespace std;

vector<int>RotateArrayByK(vector<int>&arr,int k,int n){
    k = k%n;
    reverse(arr.begin(),arr.begin()+k);
    reverse(arr.begin()+k,arr.end());
    reverse(arr.begin(),arr.end());
    return arr;
}

int main(){
    int n = 5;
    int k = 3;
    vector<int>arr = {2,4,3,1,5};
    vector<int> rotatedArr = RotateArrayByK(arr, k,n);
    for(int i:rotatedArr){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}