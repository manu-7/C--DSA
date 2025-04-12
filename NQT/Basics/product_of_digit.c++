#include<bits/stdc++.h>
using namespace std;


int ProductOfDigit(int n){
    int ans = 1;
    while(n>0){
        int digit = n%10;
        ans *= digit;
        n/=10;
    }
    return ans;

}
int main(){
    int n;
    cout<<"Enter the number:"<<endl;
    cin>>n;

   cout << "Product of digits: " << ProductOfDigit(abs(n)) << endl;
   return 0;
}