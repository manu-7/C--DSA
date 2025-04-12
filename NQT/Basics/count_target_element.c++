//Count occurrences of a target number in an array.

#include<bits/stdc++.h>
using namespace std;

int countOccurrences(int arr[],int target,int n){
    int count = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[] = {5,3,2,2,1,2,5};
    int target = 2;
    int n = sizeof(arr)/sizeof(arr[0]);
    int count = countOccurrences(arr, target, n);
    cout<<"no of occurrences of "<<target<<" is:"<<count;
}