#include<bits/stdc++.h>
using namespace std;

void print(map<int,string> &m)
{
    cout<<m.size()<<endl;

    for(auto &it : m)
    {
        cout<<it.first<<" "<<it.second <<endl;
    }
}

int main()
{
    map<int,string> m;
    m[-1] = "abc";
    m[5] = "cdc";
    m[3] = "acd";

    m.insert({4,"afg"});

    /*map<int,string> :: iterator it;
    for(it = m.begin();it != m.end();it++)
    {
        cout<<it->first<<" "<<it->second <<endl;
    }*/
    //m[1] = 1;
    //m[2] = 3;
    //m[2];
    auto it = m.find(7);
    if(it == m.end())
    {
        cout<<"no value";
    }
    else{
        cout<<it->first<<" "<<it->second;
    }cout<<endl;
    print(m);


    return 0;
}