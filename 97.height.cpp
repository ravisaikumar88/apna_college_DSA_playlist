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

int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int Lheight = height(root->left);
    int Rheight = height(root->right);
    int res = max(Lheight,Rheight);

    return res+1;
}

int main()
{
     struct Node* root = new Node(1);
    root->left  = new Node(2);
    root->right = new Node(3);
   root->left->left  = new Node(4);
   root->left->right = new Node(5);
   root->right->left = new Node(6);
   root->right->right = new Node(7);
   root->right->right->right = new Node(8);

   cout<<height(root)<<endl;
}