#include<iostream>
using namespace std;


struct Pair
{
    int min;
    int max;
};

Pair getminmax(int arr[],int n)
{
    Pair minmax;
    sort(arr, arr + n);

    minmax.min = arr[0];
    minmax.max = arr[n-1];

    return minmax;
}

int main()
{
int arr[] = {17,448,5,25,75,60};
int size = sizeof(arr)/sizeof(arr[0]);


Pair minmax = getminmax(arr,size);

cout<<"minimum element is"<<minmax.min<<endl;

cout<<"minimum element is"<<minmax.max<<endl;

return 0;
}