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

struct Info
{
    int siz;
    int max;
    int min;
    int ans;
    bool isBST;
};

Info largestBST(Node* root)
{
    if(root == NULL)
    {
        return {0,INT_MIN,INT_MAX,0,true};
    }
    if(root->left == NULL && root->right == NULL)
    {
        return {1,root->data,root->data,1,true};
    }

    Info leftinfo = largestBST(root->left);
    Info rightinfo = largestBST(root->right);

    Info curr;
    curr.siz = (1+ leftinfo.siz + rightinfo.siz);

    if(leftinfo.isBST && rightinfo.isBST && leftinfo.max<root->data && rightinfo.min > root->data)
    {
        curr.min = min(leftinfo.min,min(rightinfo.min,root->data));
        curr.max = max(rightinfo.max,max(leftinfo.max,root->data));

        curr.ans = curr.siz;
        curr.isBST = true;

        return curr;
    }
    curr.ans = max(leftinfo.ans,rightinfo.ans);
    curr.isBST = false;
    return curr;
}

int main()
{
    Node* root = new Node(15);
    root->left = new Node(5);
    root->right = new Node(30);
    root->left->left = new Node(4); 

    Info result = largestBST(root);

    cout<<result.ans<<endl;
    
    return 0;
}