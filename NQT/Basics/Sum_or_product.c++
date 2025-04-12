// # Question
// You are given a number `N` and a query `Q`. If `Q` is `1`, return the sum of integers from 1 to `N`. If `Q` is `2`, return the product of integers from 1 to `N` modulo \(10^9 + 7\).

#include<bits/stdc++.h>
using namespace std;

long long int sumOrProduct(long long int n, long long int q) {
    const long long MOD = 1000000007;

    if(q == 1){
        return (n*(n+1))/2;
    }else if(q == 0){
        long long product = 1;
        for(int i=1;i<n;i++){
            product = product*(i) % MOD;
        }
        return product;
    }
    return -1;
}
int main() {
    long long n, q;
    cout<<"Enter the number n:";
    cin >> n;
    cout<<"Enter the value of q:";
    cin>>q;
    cout << sumOrProduct(n, q) << endl;
    return 0;
}