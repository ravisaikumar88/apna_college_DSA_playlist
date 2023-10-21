#include<bits/stdc++.h>
using namespace std;


struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* insertBST(Node* root,int val)
{
    if(root == NULL)
    {
        return new Node(val);
    }
    if(val<root->data)
    {
        root->left = insertBST(root->left,val);
    }else{
        root->right = insertBST(root->right,val);
    }

    return root;
}

void inorderprint(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    inorderprint(root->left);
    cout<<root->data<<" ";
    inorderprint(root->right);
}

Node* searchinBST(Node* root,int key)
{
    if(root == NULL)
    {
        return NULL;
    }
    if(root->data == key)
    {
        return root;
    }
    if(root->data>key)
    {
       return searchinBST(root->left,key);
    }
    
    return searchinBST(root->right,key);
    
    
}

Node* inorderSuc(Node* root)
{
    Node* curr = root;
    while(curr && curr->left!=NULL)
    {
        curr = curr->left;
    }
    return curr;
}
Node* deleteNode(Node* root,int val)
{
    if(val < root->data)
    {
        root->left = deleteNode(root->left,val);
    }
    else if(val > root->data)
    {
        root->right = deleteNode(root->right,val);
    }

    else
    {
        if(root->left == NULL)
        {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if(root->right == NULL)
        {
            Node* temp = root->left;
            free(root);
            return temp;
        }

        Node* temp = inorderSuc(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right,temp->data);
        
    }
    return root;
}

int main()
{
    Node* root = NULL;
    root = insertBST(root,5);
    insertBST(root,1);
    insertBST(root,3);
    insertBST(root,4);
    insertBST(root,2);
    insertBST(root,7);

    
    if(searchinBST(root,3) == NULL)
    {
        cout<<"Key doesnt exist";
    }
    else{
        cout<<"key exist"<<endl;
    }

    inorderprint(root);
    deleteNode(root,4);
    cout<<endl;
    inorderprint(root);
    return 0;
}