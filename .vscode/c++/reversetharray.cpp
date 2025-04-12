#include<iostream>
using namespace std;
 
 void reverse(int arr[] , int n){
    int start=0;
    int end = n-1;
      
      while (start<=end)
      {
        swap(arr[start] , arr[end]);
        start++;
        end--;

      }
    
 }
  void printarray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i] <<" ";
    }
    cout<<endl;
  }
  int main(){
    int arr1[6] = { 1,4,8,5,6,7};
    int arr2[4] = {5,3,2,4};

  reverse(arr1,6);
  reverse(arr2, 4);

  printarray(arr1,6);
  printarray(arr2,4);

  return 0;
  }
 