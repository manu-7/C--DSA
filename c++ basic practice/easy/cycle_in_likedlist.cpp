#include<bits/stdc++.h>
using namespace std;

class node {
    public:
        int num;
        node* next;
        node(int val) {
            num = val;
            next = NULL;
        }
};

//utility function to insert node in the list
void insertNode(node* &head,int val) {
    node* newNode = new node(val);
    
    if(head == NULL) {
        head = newNode;
        return;
    }
    
    node* temp = head;
    while(temp->next != NULL) temp = temp->next;
    
    temp->next = newNode;
    return;
}

//utility function to create cycle


//utility function to detect cycle
bool cycleDetect(node* head) {
    if(head == NULL) return false;
    node* fast = head;
    node* slow = head;
        
    while(fast->next != NULL && fast->next->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow) return true;
    }
    return false;
}


int main() {
    node* head = NULL;
    insertNode(head,1);
    insertNode(head,2);
    insertNode(head,3);
    insertNode(head,4);

    if(cycleDetect(head) == true)
    cout<<"Cycle detected\n";
    else
    cout<<"Cycle not detected\n";
    return 0;
}
