#include <iostream>
using namespace std;

class node{
public:
    int data;
    node* next;
    
    node(int d){
        this->data=d;
        this->next=NULL;
    }
};

void insrt(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}

void delt(node* &head){
    if(head==NULL || head->next==NULL){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;}
    node* curr=head;
    node* prev=NULL;
    while(curr->next!=NULL){
        prev=curr;
        curr=curr->next;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
}

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main() {
    node* n1=new node(5);
    node* head=n1;
    insrt(head,10);
    insrt(head,20);
    delt(head);
    print(head);
    return 0;
}
