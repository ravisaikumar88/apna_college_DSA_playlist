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

void zigzagtraversal(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    stack<Node*> currlevel;
    stack<Node*> nexlevel;

    bool leftToRight = true;

    currlevel.push(root);

    while(!currlevel.empty())
    {
        Node* temp = currlevel.top();
        currlevel.pop();
        if(temp)
        {
            cout<<temp->data<<" ";
        

        if(leftToRight)
        {
            if(temp->left)
            {
                nexlevel.push(temp->left);
            }
            if(temp->right)
            {
                nexlevel.push(temp->right);
            }
        }
        //right to left
        else{
            if(temp->right)
            {
                nexlevel.push(temp->right);
            }
            if(temp->left)
            {
                nexlevel.push(temp->left);
            }

        }

        }
        if(currlevel.empty())
        {
            leftToRight = !leftToRight;
            swap(currlevel,nexlevel);
        }

    }


}


int main()
{
    Node* root = new Node(12);
    root->left = new Node(9);
    root->right = new Node(15);
    root->left->left = new Node(5);
    root->left->right = new Node(10);

    zigzagtraversal(root);

    return 0;
}