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

void inserttail(node* &tail,int d){
    node* temp=new node(d);
    tail->next=temp;
    tail=temp;
}

void insertmid(node* &head, node* &tail, int pos,int d){
    if(pos==1){
        inserthead(head,d);
        return;
    }
    node* temp=head;
    int cnt=1;
    while(cnt<pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        inserttail(tail,d);
        return;
    }
    node* insrt=new node(d);
    insrt->next=temp->next;
    temp->next=insrt;
}

void delt(node* &head, node* &tail, int pos){
    if(pos==1){
        node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }
    else{
        node* curr=head;
        node* prev=NULL;
        int cnt=1;
        while(cnt<pos){
            prev=curr;
            curr=curr->next;
            cnt++;
        }
        prev->next=curr->next;
        curr->next=NULL;
        delete curr;
    }
}

void print(node* &head){
    node* temp=head;
    while(temp->next!=NULL){
        cout<<temp->data<<endl;
        temp=temp->next;
    }
}

int main(){
    node* n1=new node(10);
    node* head=n1;
    node* tail=n1;
    inserthead(head,5);
    inserttail(tail,15);
    insertmid(head,tail,2,20);
    delt(head,tail,2);
    print(head);
}
