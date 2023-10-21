#include<bits/stdc++.h>
using namespace std;

int main()
{
    /*vector<int> v;
    int n;
    cin>>n;
    /*for(int i = 0;i<n;i++){
        int x;
        cin >> x;
        v.push_back(x);
    }*/
    /*cout<<v.size()<<endl;*/

   /* for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }*/

   /* vector<int> v(10);
    v.push_back(7);
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
    vector<int> v1(10,1);*/

    vector<int> v;
    v.push_back(7);
    v.push_back(6);

    //vector<int> v2 = v; // O(n)
    //if we do &v2 = v then we get all same 
    vector<int> &v2 = v;
    v2.push_back(5);
    for(int i = 0;i<v.size();i++)
    {
        cout<<v[i]<<endl;
    } cout<<endl;
    for(int i = 0;i<v2.size();i++)
    {
        cout<<v2[i]<<endl;
    }
    
    
    return 0;
}