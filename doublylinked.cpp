#include <bits/stdc++.h>
using namespace std;

class node{
public:
    int data;
    node* next;
    node* prev;
    
    node(int data){
        this->data=data;
        this->next=NULL;
        this->prev=NULL;
    }
};

void print(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int len(node* head){
    int len=0;
    node* temp=head;
    while(temp!=NULL){
        len++;
        temp=temp->next;
    }
    return len;
}

void insrthead(node* &head, int d){
    node* temp=new node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;
}

void insrttail(node* &tail, int d){
    node* temp=new node(d);
    temp->prev=tail;
    tail->next=temp;
    tail=temp;
}

void insrtmid(node* &head, node* &tail, int pos, int d){
    if(pos==1){
        insrthead(head,d);
        return;
    }
    int cnt=1;
    node* temp=head;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insrttail(tail,d);
        return;
    }
    node* insrt=new node(d);
    insrt->next=temp->next;
    insrt->prev=temp->prev;
    temp->next=insrt;
}

void delt(node* &head, node* &tail, int pos){
    if(pos==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
        return;
    }
    int cnt=1;
    node* curr=head;
    node* prev=NULL;
    while(cnt<pos){
        prev=curr;
        curr=curr->next;
        cnt++;
    }
    prev->next=curr->next;
    curr->next=NULL;
    delete curr;
    
}
int main(){
    node* n1=new node(10);
    node* head=n1;
    node* tail=n1;
    insrthead(head,5);
    insrttail(tail,25);
    insrtmid(head,tail,2,100);
    print(head);
    delt(head,tail,2);
    print(head);
    cout<<len(head);
}
