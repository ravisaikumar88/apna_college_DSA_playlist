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
    int Lheight = height(root->left);
    int Rheight = height(root->right);
    int res = max(Lheight,Rheight);

    return res+1;
}*/
/*int diameter(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int Lheight = height(root->left);
    int Rheight = height(root->right);
    int currDiameter = Lheight+Rheight+1;

    int lDiameter = diameter(root->left);
    int rDiameter = diameter(root->right);

    return max(currDiameter,max(lDiameter,rDiameter));

}*/

int diameter(Node* root,int* treeheight)
{
    if(root == NULL)
    {
        *treeheight = 0;
        return 0;

    }
    int lh = 0, rh = 0;
    int lDiameter = diameter(root->left,&lh);
    int rDiameter = diameter(root->right,&rh);

    int currDiameter = lh + rh + 1;
    *treeheight = max(lh,rh) + 1;

    return max(currDiameter,max(lDiameter,rDiameter));
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
    int treeheight = 0;
   cout<<diameter(root,&treeheight)<<endl;
    return 0;
}