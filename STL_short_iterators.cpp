#include<bits/stdc++.h>
using namespace std;


int main()
{
    vector<int> v = {2,3,4,5,6,7};
    for(int i = 0;i<v.size();i++){
        cout<<v[i]<<" ";
    }cout<<endl;
    /*for(int &val:v)
    {
        val++;
    }*/
    for(int val : v)
    {
        cout<< val << " ";
    }cout<<endl;

    for(auto value : v)
    {
        cout<<value<<" ";
    }
    return 0;
}