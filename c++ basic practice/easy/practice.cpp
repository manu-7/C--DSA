#include<iostream>

using namespace std;

class node{
    public:
    int data;
    node*next;

    node(int data){
        this ->data = data;
        this ->next = NULL;

    }

};

void print(node*head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        temp = temp->next;
    }
}

void push(node**head,int data){
     node* newNode = new node(data);
newNode->next = *head;
*head = newNode;

}


int main(){
    node*head = NULL;
   push(&head,7);
    push(&head , 4);
    push(&head , 9);
    push(&head , 2);
    cout<<endl;


    print(head);
}