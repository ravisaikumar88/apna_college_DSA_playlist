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

int maxpathsumUtil(Node* root,int &ans)
{
    if(root == NULL)
    {
        return 0;
    }
    int left = maxpathsumUtil(root->left,ans);
    int right = maxpathsumUtil(root->right,ans);

    int nodeMax = max(max(root->data,root->data+left+right),
                         max(root->data+left ,root->data+right));

    ans = max(ans,nodeMax);

    int singlePathSum = max(root->data,max(root->data + left, root->data+right));
    return singlePathSum;
}


int maxpathsum(Node* root)
{

    int ans = INT_MIN;
    maxpathsumUtil(root,ans);
    return ans;
}


int main()
{
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(-4);
    root->right->right = new Node(5);  


    cout<<maxpathsum(root);
    return 0;
}