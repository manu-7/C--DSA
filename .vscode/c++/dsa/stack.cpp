/*#include<iostream>
#include<stack>
using namespace std;


int main() {

stack<int>s;

//push operation

s.push(2);
s.push(3);

//pop operation

s.pop();

cout<<"printing top element:" <<s.top()<<endl;

if(s.empty()){
    cout<<"stack is empty"<<endl;
}
else{
    cout<<"stack  is not empty"<<endl;

}
cout<<"size of stack is:"<<s.size()<<endl;
return 0;

}*/

#include<iostream>
#include<stack>
using namespace std;

class Mystack{
    //properties

    public:
        int *arr;
        int top;
        int size;

    //behaviour
    Mystack(int size){
        this ->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){             //check if size is avilaable or not
        if(size-top>1){
            top++;
            arr[top]=element;
        }
        else{
            cout << "stack overflow"<<endl;
        }
    }
    void pop(){
        if(top >=0){
            top--;
        }
        else{
            cout<<"satck underflow"<<endl;
        }
        

    }
    int peek(){
        if(top>=0)
            return arr[top];
        else{
            cout<<"stack is empty"<<endl;
        }

    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }
    }
};
int main(){
    Mystack st(6);
    st.push(11);
    st.push(43);
    st.push(44);

   cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    st.pop();

    cout << st.peek() << endl;

    if(st.isEmpty()) {
        cout << "Stack is Empty mere dost " << endl;
    }
    else{
        cout << "Stack is not Empty mere dost " << endl;
    }


    return 0;
}