#include<iostream>
using namespace std;

int main(){
    int A;
    cout<<"enter A:";
    cin>>A;

    int B;
    cout<<"enter B:";
    cin>>B;

    int C;
    cout<<"enter C:12";
    cin>>C;

    if (A>B && A>C){
        cout<<"A is greatest number"<<endl;
    }
    else if (B>A && B>C)
    {
        cout<<"B is the greatest number"<<endl;
    }
    
    else{

        cout<<"C is the greatest number"<<endl;
    }

    return 0;
}