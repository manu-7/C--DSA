#include<iostream>
using namespace std;

void merge(int arr1[],int n,int arr2[],int m,int arr3[]){

    int i = 0;
    int j = 0;
    int index = 0;
    
    while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[index] = arr1[i];
            i++;
            index++;
        }
        else{
            arr3[index] = arr1[j];
            j++;
            index++;
        }
    }

    while(i<n){
        arr3[index] = arr1[i];
        i++;
        index++;
    }

    while(j<m){
        arr3[index]=arr2[j];
        j++;
        index++;
    }
}
    void print(int ans[],int n){
        for(int i = 0;i<n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }

int main(){
    int arr1[5] = {1,2,3,5,6};
    int arr2[4] = {8,9,10,11};
    int arr3[9] = {0};
    merge(arr1, 5,arr2 ,4 ,arr3);
    print(arr3,9);


    return 0;
}