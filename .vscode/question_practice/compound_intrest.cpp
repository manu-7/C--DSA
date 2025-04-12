#include<iostream>
#include<cmath>
using namespace std;

int main(){

    float principle,rate,time,compoundIntrest;
    cout<<"enter the principle: ";
    cin>>principle;

    cout<<"enter the rate: ";
    cin>>rate;

    cout<<"enter time period in years: ";
    cin>>time;


    compoundIntrest = principle* pow(1+rate,time) - principle;

    cout<<"compound intrest is => "<<compoundIntrest<<endl;

    return 0;


}