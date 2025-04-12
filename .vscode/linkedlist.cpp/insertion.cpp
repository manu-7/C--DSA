#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;

    node(int data1){
        data = data1;
        next = NULL;
    }
};
//add node at first

void insertathead(node*&head,int data1){
    node*temp = new node(data1);
    temp ->next = head;
    head = temp;
}
    void print(node*&head){
        node*temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp -> next;
        }
        cout<<endl;
    }

int main(){
    node*node1 = new node(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;

    node*head = node1;
    print(head);
    insertathead(head,12);
    print(head);
    return 0;
}