#include<bits/stdc++.h>
using namespace std;

struct Node{
    Node* links[26];
    bool flag = false;

    bool containKey(char ch)
    {
        return links[ch-'a'];
    }

    Node* getchar(char ch)
    {
        return links[ch-'a'];
    }
    void put(char ch,Node* node)
    {
        links[ch-'a'] = node;
    }
    void setEnd()
    {
        flag = true;
    }
    bool isEnd()
    {
        return flag;
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

    void insert(string word)
    {
        Node* node = root;
        for(int i=0;i<word.length();i++)
        {
            if(!node->containKey(word[i]))
            {
                node->put(word[i],new Node());
            }
            node = node->getchar(word[i]);
        }
        node->setEnd();
    }
    bool checkifPrefixExists(string word)
    {
        bool fl = true;
        Node* node = root;
        for(int i=0;i<word.length();i++)
        {
            if(node->containKey(word[i]))
            {
                node = node->getchar(word[i]);
                if(node->isEnd() == false)
                {
                    return false;
                }
            }
            return false;
        }
    }
};

string completeString(int n,vector<string> &a)
{
      Trie trie;
      for(auto &it : a)
      {
        trie.insert(it);
      }
      string longest = "";
      for(auto &it:a)
      {
        if(trie.checkifPrefixExists(it))
        {
            if(it.length() > longest.length() && 
                    it < longest)
            {
                longest = it;
            }
        }
      }
      if(longest == "")
      {
        return "None";
      }
      return longest;

}

int main()
{
    return 0;
}