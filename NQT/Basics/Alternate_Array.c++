#include<bits/stdc++.h>
using namespace std;

int main(){
    int arr[] = {4,5,6,7,9,8,9,0,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>ans;
    for(int i=0;i<n;i+=2){
        ans.push_back(arr[i]);
    }

    cout<<"Alternate elements:"<<endl;
    for(int ele:ans){
        cout<<ele<<" ";
    }

    return 0;

}