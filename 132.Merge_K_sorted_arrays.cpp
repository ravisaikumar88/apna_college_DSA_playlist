#include<bits/stdc++.h>
using namespace std;

int main()
{
    int k;
    cin >> k;

    vector<vector<int>> a(k);

    for(int i = 0;i<k;i++)
    {
        int size;
        cin>> size;

        a[i] = vector<int>(size);

        for(int j = 0;j<size;j++)
        {
            cin>>a[i][j];
        }
    }

    vector<int> idx(k,0);

    priority_queue<int,vector<int>,greater<int>> pq;

    for(int i=0;i<k;i++)
    {
        
    }


    return 0;
}