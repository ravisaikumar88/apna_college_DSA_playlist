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
//Check BST
bool isBST(Node* root, Node* min=NULL,Node* max=NULL)
{
    if(root == NULL)
    {
        return true;
    }
    if(min != NULL && root->data <= min->data)
    {
        return false;
    }
    if(max!=NULL && root->data>=max->data)
    {
        return false;
    }

    bool leftvalid = isBST(root->left,min,root);
    bool rightvalid = isBST(root->right,root,max);

    return (leftvalid&&rightvalid);
}

int main()
{
    Node* root = new Node(5);
    root->left = new Node(2);
    root->right = new Node(8);

    if(isBST(root,NULL,NULL))
    {
        cout<<"valid BST"<<endl;
    }else{
        cout<<"not valid one"<<endl;
    }

    
    return 0;
}