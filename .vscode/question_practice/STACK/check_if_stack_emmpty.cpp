#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack <double> nums;

    cout<<"is the stack empty?"<<endl;

    //check if the stack is empty

    if(nums.empty()){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

    cout<<"pushing element"<<endl;

    nums.push(5);
    nums.push(6);
    nums.push(7);

    cout<<"is the stack empty?"<<endl;

    //check if the stack is empty

    if(nums.empty()){
        cout<<"yes"<<endl;

    }
    else{
        cout<<"no"<<endl;
    }
return 0;
}