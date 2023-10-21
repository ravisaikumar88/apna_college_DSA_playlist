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

/*int height(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return max(height(root->left),height(root->right)) +1;
}*/
/*bool BalancedTree(Node* root)
{
    if(root == NULL)
    {
        return true;
    }
    if(BalancedTree(root->left) == false)
    {
        return false;
    }
    if(BalancedTree(root->right) == false)
    {
        return false;
    }

    int lh = height(root->left);
    int rh = height(root->right);
    if(abs(lh-rh)<=1)
    {
        return true;
    }
    else{
        return false;
    }
}*/

bool BalancedTree(Node* root,int* height)
{
    if(root == NULL)
    {
        return true;
    }
    int lh = 0, rh = 0;
    if(BalancedTree(root->left,&lh) == false)
    {
        return false;
    }
    if(BalancedTree(root->right,&rh) == false)
    {
        return false;
    }

    *height = max(lh,rh) +1;
    if(abs(lh - rh)<=1){
        return true;
    }else{
        return false;
    }

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

    int height = 0;
   if(BalancedTree(root,&height)){
    cout<<"balanced tree"<<endl;
   }else{
    cout<<"not a balanced one"<<endl;
   }
    return 0;
}