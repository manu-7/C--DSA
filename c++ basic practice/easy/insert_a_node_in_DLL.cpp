#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class node {
    public:

    int data;
    node*next;
    node*prev;

    node(int data){
        data = data;
        next = NULL;
        prev = NULL;
    }

};

void insertattail(node*&head,int data0(data)){
    node*newnode = new node(data);
    if(&head==NULL){
        head = newnode;
        return;
    }
    node*temp = head;
    while(temp->next!=NULL){
        
    }
}