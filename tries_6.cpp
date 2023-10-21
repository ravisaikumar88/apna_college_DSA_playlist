#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* links[2];
    bool containKey(int bit)
    {
        return (links[bit] != NULL);
    }

    Node* get(int bit)
    {
        return links[bit];
    }

    void put(int bit,Node* node)
    {
        links[bit] = node;
    }
};

class Trie{
    private :
        Node* root;
    public:
        Trie()
        {
            root = new Node();
        }
        void insert(int num)
        {
            Node* node = root;
            for(int i = 31;i>=0;i--)
            {
                int bit = (num >> i) & 1;
                if(!node->containKey(bit))
                {
                    node->put(bit,new Node()); 
                }
                node = node->get(bit);
            }
        }

        int getMax(int num)
        {
            Node* node = root;
            int maxNo = 0;
            for(int i = 31;i>=0;i--)
            {
                int bit = (num>>i) & 1;
                if(!node->containKey(!bit))
                {
                    maxNo = maxNo | (1<<i);
                    node = node->get(!bit);
                }
                else{
                    node = node->get(bit);
                }
            }
        }
};

int maxXOR(int n,int m,vector<int> &arr1,vector<int> &arr2)
{
    Trie trie;
    for(auto &it: arr1){
        trie.insert(it);
    }
    int maxi = 0;
    for(auto &it:arr2)
    {
        maxi = max(maxi,trie.getMax(it));
    }
}

int main()
{
    return 0; 
}