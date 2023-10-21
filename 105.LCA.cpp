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


bool getpath(Node* root,int key,vector<int> &path)
{
    if(root == NULL)
    {
        return false;
    }
    path.push_back(root->data);
    if(root->data == key)
    {
        return true;
    }

    if(getpath(root->left,key,path) || getpath(root->right,key,path))
    {
        return true;
    }
    path.pop_back();
    return false;
     
}


int LCA(Node* root,int n1,int n2)
{
    vector<int> path1,path2;

    if(!getpath(root,n1,path1) || !getpath(root,n2,path2))
    {
        return -1;
    }

    cout<<"path of n1("<<n1<<"): ";
    for(int i = 0;i<path1.size();i++)
    {
        cout<<path1[i]<<"->";
    }
    cout<<"NULL"<<endl;
    cout<<"path of n2("<<n2<<"): ";
    for(int i = 0;i<path1.size();i++)
    {
        cout<<path2[i]<<"->";
        
    }
    cout<<"NULL"<<endl;   

    int pc;
    for(pc = 0;pc<path1.size() && path2.size();pc++)
    {
        if(path1[pc] != path2[pc])
        {
            break;
        }
    }

    return path1[pc-1];
}


int main()
{
    Node* root = new Node(4);
    root->left = new Node(9);
    root->right = new Node(5);
    root->left->left = new Node(1);
    root->left->right = new Node(3);
    root->right->right = new Node(6);
    int n1 = 1;
    int n2 = 6;
    int res = LCA(root,n1,n2);
    cout<<res<<endl;
    return 0;
}