#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val){
        data = val;
        next = NULL;
        prev = NULL;
    }
};

void insertAtHead(node* &head,int val){
    node* n = new node(val);
    
    n->next = head;
    if(head!=NULL){
        head->prev = n;
    }
    head = n;
}

void insertAtTail(node* &head,int val){
    node* n = new node(val);

    
    if(head == NULL){
        head = n;
        return;
    }
    node* temp = head;


    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next = n;
    n->prev = temp;
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->next;

    }
    cout<<endl;
}

void deletion(node* &head,int val){

    if(head == NULL){
        return;
    }
    if(head->data == val || head->next == NULL){
         node* todelete = head;
         head = head->next;
       

        delete todelete;
        return;
    }
    
    node* temp = head;
    while(temp->next->data!=val){
        temp = temp->next;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    if(temp->next!=NULL){
    temp->next->prev = temp;
    }
    delete todelete;
}

int main(){
    node* head = NULL;

    insertAtHead(head,1);
    insertAtTail(head,2);
    insertAtHead(head,3);
    insertAtTail(head,4);
    insertAtTail(head,5);
    display(head);
    deletion(head,4);
    display(head);
   /* deletion(head,3);
    display(head);
    deletion(head,5);
    display(head);*/

    
    return 0;
}