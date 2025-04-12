#include<iostream>
using namespace std;
class Node{
    public:
    int val;
    Node*next;


    Node(int data){                     
        val = data;                      //this->data = data;
        next = NULL;                     //this->next = NULL;
    }


};
void insertathead(Node* &head , int val){
    Node* new_node =  new Node(val);
    new_node->next = head;
    head = new_node;


}
void insertattail(Node* head,int val){
    


}
void display(Node* head){

    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->val<<"->";
        temp = temp->next;

    }
    cout<<"null"<<endl;


}
int main(){
Node* head = NULL;
insertathead(head,5);
display(head);
insertathead(head,1);
display(head);



return 0;
}

