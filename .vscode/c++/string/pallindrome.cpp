#include<bits/stdc++.h>
using namespace std;

bool ispallindrome(string &str){
    int n = str.length();
    int start = 0;
    int end = n-1;

    while(start<=end){
        if(str[start]!=str[end]){
            return false;
        }
        else{
            return true;
        }
        start++;
        end--;
    }

}
int main()
{
    string str = "ManuSingh";
    cout<<str<<endl;
    if(ispallindrome(str)){
        cout<<"the string is pallindrome"<<endl;
    }
    
        cout<<"the string is not pallindrome:";
    return 0;
}