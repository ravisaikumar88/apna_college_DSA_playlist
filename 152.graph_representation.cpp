#include<bits/stdc++.h>
using namespace std;
const int N = 1e5+2,MOD = 1e9+7;

int main()
{
    int n,m;
    cin>>n>>m;

    vector<vector<int>> adjm(n+1,vector<int>(n+1,0));

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;
        adjm[x][y] = 1;
        adjm[y][x] = 1;


    }

    cout<<"matrix is given by: "<<endl;

    for(int i=1;i<n+1;i++)
    {
        for(int j=1;j<n+1;j++)
        {
            cout<<adjm[i][j]<<" ";
        }
        cout<<endl;
    }

    if(adjm[3][6])
    {
        cout<<"there is an edge"<<endl;
    }else{
        cout<<"no edge";
    }

    cout<<endl;
    cout<<endl;

    cin>>n>>m;
    vector<int> adj[N];
    for(int i=0;i<m;i++)
    {
        int x,y;
        cin>>x>>y;

        adj[x].push_back(y);
        adj[y].push_back(x);

    }

    cout<<"adjacency list is given by: "<<endl;

    for(int i=1;i<n+1;i++)
    {
        cout<<i<<"->";
        for(auto x:adj[i])
        {
            cout<<x<<" ";
        }cout<<endl;
    }


    return 0;
}