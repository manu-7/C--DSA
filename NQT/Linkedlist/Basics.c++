#include <bits/stdc++.h>
using namespace std;

class node {
public:
    int data;
    node *next;

    // Constructor
    node(int val) {
        data = val;
        next = NULL;
    }
};

//insert at head

void insertAtHead(node*&head,int val){
    node*n = new node(val);
    n->next = head;
    head = n;
}
// Insert at tail
void insertAtTail(node*&head,int val){
    node*n = new node(val);

    if(head==NULL){
        head = n;
        return;
    }

    node*temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
}

// Display linked list
void display(node* head) {
    node* temp = head;

    while (temp != NULL) { 
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl; 
}

//delete the node

void DeleteNode(node*&head,int val){
    node*temp = head;

    while(temp->next->data!=val){
        temp = temp->next;
    }
    node*todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

//delete at head

void HeadDelete(node*&head){
    node*todelete = head;
    head = head->next;
    delete todelete;
}

int main() {
    node* head = NULL;

    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);

    insertAtHead(head,4);

    DeleteNode(head,3);
    HeadDelete(head);

    display(head);

    return 0;
}
