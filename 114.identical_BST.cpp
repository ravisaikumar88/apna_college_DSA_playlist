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



bool isIdentical(Node* root1,Node* root2)
{
    if(root1 == NULL && root2 == NULL)
    {
        return true;
    }
    else if(root1 == NULL || root2 == NULL)
    {
        return false;
    }
    else{
        bool cond1 = (root1->data == root2->data);
        bool cond2 = isIdentical(root1->left,root2->left);
        bool cond3 = isIdentical(root1->right,root2->right);

        if(cond1 && cond2 && cond3)
        {
            return true;
        }
        else{
            return false;
        }
    }

}



int main()
{
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    struct Node* root2 = new Node(1);
    root2->left = new Node(2);
    root2->right = new Node(3);
    root2->left->left = new Node(4);
    root2->left->right = new Node(5);
    root2->right->left = new Node(6);
    root2->right->right = new Node(8);

    if(isIdentical(root,root2))
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }
    
    

    return 0;
}