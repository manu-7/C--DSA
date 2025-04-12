#include<iostream>
#include <bits/stdc++.h>

using namespace std;

class node{
    public:
    int data;
    node*next;
    node*prev;

     node(int data1){
        data = data1;
        next = NULL;
        prev = NULL;
     }
};

void print(node*head){
    while(head!=NULL){
        cout<<head->data<<" ";
        head = head->next;
    }
}

node*reversedll(node*head){
    if(head==NULL or head->next == NULL){
        return head;
    }

stack<int>st;
node*temp = head;

while(temp!=NULL){
    st.push(temp->data);
    temp = temp->next;
}

while(temp!=NULL){
    temp->data = st.top();
    st.pop();
    temp = temp->next;
}

return head;
}

int main(){
    // Correctly creating and linking the list
    node* head = new node(1);
    head->next = new node(2);
    head->next->prev = head;

    head->next->next = new node(3);
    head->next->next->prev = head->next;

    head->next->next->next = new node(4);
    head->next->next->next->prev = head->next->next;

    head->next->next->next->next = new node(5);
    head->next->next->next->next->prev = head->next->next->next;

    cout << "Original list: "<<endl;
    print(head);

    // Reverse the linked list
    head = reversedll(head);

    cout << "Reversed list: "<<endl;
    print(head);

    return 0;
}