#include<iostream>
using namespace std;

class node
{
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

void makeCycle(node* &head,int pos){
    node* temp = head;
    node* startNode;

    int count = 1;
    while(temp->next!=NULL){

        if(count == pos){
            startNode = temp;
        }
        temp = temp->next;
        count++;
    }

    temp->next = startNode;
}

void removeCycle(node* &head){
    node* slow = head;
    node* fast = head;
    do{
        slow = slow->next;
        fast = fast->next->next;

    }while(slow!=fast);

    fast = head;

    while (slow->next!=fast->next)
    {
        slow = slow->next;
        fast = fast->next;

    }

    slow->next = NULL;
    
}



bool detectCycle(node* &head)
{
    node* slow = head;
    node* fast = head;

    while (fast!=NULL && fast->next!= NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if(fast == slow){
            return true;
        }
    }
    return false;
    
}
int main(){
    node* head = NULL;

    insertAtLeaf(head,1);
    insertAtLeaf(head,2);
    insertAtLeaf(head,3);
    insertAthead(head,4);
    insertAtLeaf(head,5);
    insertAtLeaf(head,6);
    insertAtLeaf(head,7);
    insertAthead(head,8);

    makeCycle(head,4);

    //display(head);

    cout<<detectCycle(head)<<endl;
    removeCycle(head);
    cout<<detectCycle(head)<<endl;
    display(head);

    return 0;
}