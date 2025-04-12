/*#include<iostream>
using namespace std;
bool issorted(int arr[],int n){
    for(i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            return false;
        }
    } return true;
}

int main(){
    int arr[]  = {3,4,5,6,7,};
    int n = 5;
    cout<<issorted(arr,n);
    return 0;
}*/

#include<bits/stdc++.h>

using namespace std;

bool isSorted(int arr[], int n) {
  for (int i = 1; i < n; i++) {
    if (arr[i] < arr[i - 1])
      return false;
  }

  return true;
}

int main() {

  int arr[] = {1, 2, 3, 4,2, 5}, n = 5;

  if (isSorted(arr, n)) {
        cout << "True";
    } else {
        cout << "False";
    }
    return 0;

}
