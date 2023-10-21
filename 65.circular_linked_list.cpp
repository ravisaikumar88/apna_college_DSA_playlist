#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data = val;
        next = NULL;
    }
};
void insertAthead(node* &head,int val){ 
    node* n = new node(val);
    node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    n->next = head;
    temp->next = n;
    head = n;
}

void insertatTail(node* &head,int val){
    node* n = new node(val);
    if(head == NULL){
        n->next = n;
        head = n;
        return;
    }
    
    node* temp = head;
    while(temp->next!=head){
        temp=temp->next;
    }
    temp->next = n;
    n->next = head;
}

void display(node* head){
    node* temp = head;
    do{
        cout<<temp->data<<" ";
        temp = temp->next;
    }while(temp!=head);
    cout<<endl;
}

void deletion(node* &head,int val){
    node* temp = head;
    if(head->data == val){
        node* temp = head;
        while(temp->next!=head){
            temp = temp->next;
        }
        node* todelete = head;
        head = head->next;
        temp->next = head;
        delete todelete;
        return;

    }
    while(temp->next->data!=val){
        temp = temp->next;
    }
    if(temp->next->next!=head){
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
    }
    else{
        node* todelete = temp->next;
        temp->next = head;
        delete todelete;
    }
}

int main(){
    node* head = NULL;

    
    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    insertatTail(head,6);
   
    insertAthead(head,7);
    display(head);

    deletion(head,4);
    display(head);
    deletion(head,6);
    display(head);
    deletion(head,7);
    display(head);
    return 0;
}