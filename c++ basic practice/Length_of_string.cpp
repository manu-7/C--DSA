#include<iostream>
using namespace std;

int main(){

    string str ="Manu singh";
    int length = 0;

    for(int i=0; str[i]!='\0';i++){
        length++;
    }
    cout<<"the lenght of the string is:"<<length<<endl;
    return 0;
}