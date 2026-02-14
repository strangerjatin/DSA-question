#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data=val;
        this->next=NULL;
    }
};
void insertAtHead(Node* &head, int val){
    Node* temp=new Node(val);
    temp->next = head;
    head =temp;
}
void print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1=new Node(10);
    cout<<"Data of node1: "<<node1->data<<endl;
    cout<<"Next of node1: "<<node1->next<<endl;

    Node* head=node1;
    print(head);

    insertAtHead(head, 20);
    print(head);

    insertAtHead(head, 30);
    print(head);

    return 0;
}