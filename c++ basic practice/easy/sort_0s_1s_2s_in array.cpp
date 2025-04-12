#include<iostream>
using namespace std;

void Sortarray(vector<int>&arr,int n){
    int cnt0=0,cnt1=0,cnt2=0;
    for(int i=0;i<n;i++){
        if(arr[i]==0) cnt0++;
        else if(arr[i]==1) cnt1++;
        else cnt2++;
    }
}