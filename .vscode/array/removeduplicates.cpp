#include<iostream>
using namespace std;
int duplicate(int arr[], int n){
  int i=0;
  for(int j=0;j<n;j++){
    if(arr[i]!=arr[j]){
      i++;
      arr[i]=arr[j];
    }
  }
  return i+1;
}
int main(){
    int arr[5]={1,2,2,3,3};
    int n =sizeof(arr)/sizeof(arr[0]);
    int k = duplicate(arr, n);
  cout << "The array after removing duplicate elements is " << endl;
  for (int i = 0; i < k; i++) {
    cout << arr[i] << " ";
  }

}