#include<iostream>
using namespace std;

int main() {
    
    int arr[] = {1, 2, 4,5,3};
    int n = sizeof(arr) / sizeof(arr[0]);

    int maxsum = arr[0];
    int sum = 0;

    for(int i=0;i<n;i++){
        if(sum>0){
            sum = sum+arr[i];
        }else{
            sum = arr[i];
        }
        if(sum>maxsum){
            maxsum = sum;
        }
    }
    

    cout << "Maximum subarray sum is: " << maxsum << endl;
    return 0;
}
