#include<bits/stdc++.h>
using namespace std;

vector<int>PivotSorted(vector<int>arr,int pivot){
    vector<int>Result;
    int idx = 0;
    int n = arr.size();

    for(int num:arr){
        if(num<pivot){
            arr[idx] = num;
            idx++;
        }
    }
    for(int num:arr){
        if(num == pivot){
            arr[idx] = num; 
            idx++;       
        }
    }
    for(int num:arr){
        if(num>pivot){
            arr[idx] = num;
            idx++;
        }
    }
    return Result;
}
int main() {
    
    vector<int> arr = {0,1, 7, 3, 2, 5, 5, 6, 2};
    int pivot;


    cout << "Enter the pivot: ";
    cin >> pivot;

    vector<int> result = PivotSorted(arr, pivot);

    cout << "Rearranged Array: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}