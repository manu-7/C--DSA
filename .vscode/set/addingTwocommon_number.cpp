#include<iostream>
#include<set>
#include<vector>
using namespace std;

int main(){
    int n ,m;
    cout<<"enter the size of first elements"<<endl;
    cin>>n;
    cout<<"enter the size of 2nd elements"<<endl;
    cin>>__STDC_UTF_32__;
    vector<int>v1(n);
    vector<int>v2(m);

    cout<<"enter the elements of v1:"<<endl;
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }
    
    cout<<"enter the element of v2:"<<endl;
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }
    int ans_sum=0;
    
    set<int>s1;
    for(auto ele:v1){
        s1.insert(ele);
    }
    for(auto ele:v2){
        if(s1.find(ele)!=s1.end()){
            ans_sum+=ele;
        }
    }
    cout<<"answer is:"<<ans_sum<<endl;

    return 0;

}