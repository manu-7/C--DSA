#include<iostream>
#include<vector>
#include<set>
using namespace std;

int main(){
    int n;
    cout<<"enter the size of vector:"<<endl;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    set<int>s1;
    for(auto val:v){
        s1.insert(val);
    }
    auto itr = s1.begin();
    itr++;
    cout<<"2nd smallest number:"<<*itr<<endl;

    return 0;
}