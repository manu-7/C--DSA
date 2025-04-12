#include<bits/stdc++.h>
using namespace std;

int sortArr(vector<int> &arr){
    sort(arr.begin(),arr.end());
    return arr[arr.size()-2];
}

int main(){
    vector<int>arr1 = {4,5,8,8,0};
    vector<int>arr2 = {5,8,2,7,1};

    cout<<"the largest element of the arr1 is ->"<<sortArr(arr1)<<endl;
    cout<<"the largest element of the arr2 is->"<<sortArr(arr2)<<endl;

    return 0;
}


// 2nd approach

int findLargestElement(int arr[],int n){
int max = arr[0];
for(int i=0;i<n;i++){
    if(max<arr[i]){
        max = arr[i];

    }
}
return max;
}

int main(){
    int arr[] = {4,5,6,8,7};
    int n = 5;
    int max = findLargestElement(arr,n);
    cout<<"the largest element of the array is->"<<max<<endl;

    return 0;
}