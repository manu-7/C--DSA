#include<bits/stdc++.h>
using namespace std;

void reverseString(string &str){
    int n = str.length();
    int start = 0;
    int end = n-1;

    while(start<=end){
        swap(str[start],str[end]);
        start++;
        end--;
    }

}
int main()
{
    string str = "ManuSingh";
    cout<<str<<endl;
    reverseString(str);
    cout << str;
    return 0;
}

