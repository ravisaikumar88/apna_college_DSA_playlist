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

vector<Node*> constructTrees(int start,int end)
{
    vector<Node*> trees;

    if(start>end)
    {
        return NULL;
    }

    for(int i = start;i<=end;i++)
    {
        vector<Node*> leftsubtrees = constructTrees(start,i-1);
        vector<Node*> rightsubtrees = constructTrees(i+1,end);

        for(int j = 0;i<leftsubtrees.size();j++)
        {
            Node* left = leftsubtrees[j];
            for(int k = 0;k<rightsubtrees.size();k++)
            {
                Node* right = rightsubtrees[k];
                Node* node = new Node(i);
                node->left = left;
                node->right = right;
                trees.push_back(node);
            }
        }
    }
    return trees;
}


void preorder(Node* root)
{
    if(root == NULL)
    {
        return NULL;
    }
}
int main()
{
    return 0;
}