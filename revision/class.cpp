#include<iostream>
using namespace std;

class car{
    private:
    string brand;

    public:
    int price ;

    car(string a,int b){
        brand = a;
        price = b;

    }
    void showdetails(){
        cout<<"brand :" <<brand << "price is:"<<price<<endl;
    }
};
int main(){
    car car1("toyota",1900);
    car1.showdetails();
    return 0;
}
