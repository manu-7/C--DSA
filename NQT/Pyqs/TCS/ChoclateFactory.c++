#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr = {4,5,0,1,9,0,5,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    vector<int>result;
    vector<int>zeros;
    vector<int>nonzeros;

    for(int i=0;i<n;i++){
        if(arr[i]==0){
            zeros.push_back(arr[i]);
        }else{
            nonzeros.push_back(arr[i]);
        }
        for(int i=0;i<nonzeros.size();i++){
            result.push_back(nonzeros[i]);
        }
        for(int i=0;i<zeros.size();i++){
            result.push_back(zeros[i]);
        }
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    
    
   return 0;


}