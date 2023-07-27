#include<bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    
    node(int data){
        this->data=data;
        this->next=NULL;
    }
};

void inserthead(node* &head,int d){
    node* temp=new node(d);
    temp->next=head;
    head=temp;
}

void delt(node* &head){
    node* temp=head;
    head=head->next;
    temp->next=NULL;
    delete temp;
}

void print(node* &head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
    int n;
    cout<<"Enter first element to push in stack:";
    cin>>n;
    node* n1=new node(n);
    node* head=n1;
    int choice;
    while(1){
    cout<<"ENTER YOUR CHOICE \n 1. Push \n 2. Pop \n 3. Print \n" ; 
    cin>>choice;
    switch(choice){
        case 1:
            int d;
            cout<<"Enter number to insert:";
            cin>>d;
            inserthead(head,d);
            break;
        case 2:
            delt(head);
            break;
        case 3:
            print(head);
            break;
        default:
            cout<<"wrong choice";
    }
}
}
