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
    node* n  = new node(val);
    n->next = head;
    head = n;
}

void insertAtLeaf(node* &head,int val){
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
}

void display(node* head){
    node* temp = head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
}

node* reversek(node* &head,int k){
    node* prevptr = NULL;
    node* currptr = head;
    node* nextptr;

    int counter = 0;

    while(currptr!=NULL && counter <k){
        nextptr = currptr->next;
        currptr->next = prevptr;

        prevptr = currptr;
        currptr = nextptr;
        counter++;
    }

    if(prevptr!=NULL){
        head->next = reversek(nextptr,k);
    }
    return prevptr;
}


int main(){
    node* head = NULL;

    insertAtLeaf(head,1);
    insertAtLeaf(head,2);
    insertAtLeaf(head,3);
    insertAtLeaf(head,4);
    insertAthead(head,5);
    display(head);

    int k;
    cin>>k;
    node* newhead = reversek(head,k);
    display(newhead);
    return 0;

}