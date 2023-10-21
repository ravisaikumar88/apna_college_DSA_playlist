#include<bits/stdc++.h>
using namespace std;

vector<bool> vis;
int n,m;
vector<vector<int>> adj;
vector<int> components;

int get_comp(int idx)
{
    if(vis[idx])
    {
        return 0;
    }
    vis[idx] = true;
    int ans = 1;

    for(auto i:adj[idx])
    {
        if(!vis[i])
        {
            ans+=get_comp(i);
            vis[i] = true;
        }


    }
    return ans;
}

int main()
{
    cin>>n>>m;
    adj = vector<vector<int>>(n);
    vis = vector<bool>(n,0);
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);
    }

    for(int i=0;i<n;i++)
    {
        if(!vis[i])
        {
            components.push_back(get_comp(i));
        }
    }

    for(auto i : components)
    {
        cout<< i << " ";
    }
    cout<<endl;

    long long ans = 0;
    for(auto i:components)
    {
        ans += i*(n-i);
    }
    cout<<(ans/2)<<endl;
    return 0;
} 