#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<vector<int>> v;
    for(int i=0;i<n;i++)
    {
        int start,end;
        cin>>start>>end;
        v.push_back({start,end});
    } 

    sort(v.begin(),v.end(),[&](vector<int> &a,vector<int> &b){
        return a[1] < b[1];
    });
    for (const vector<int>& vec : v) {
    cout << vec[0] << " " << vec[1] << endl;
}


    int take = 1;
    int end = v[0][1];
    cout<<v[0][0]<<" "<<v[0][1]<<endl;
    for(int i=1;i<n;i++)
    {
        if(v[i][0] >= end)
        {
            take++;
            end = v[i][1]; 
            cout<< v[i][0] << " " << v[i][1]<<endl;
        }
    }
    cout << take << endl;
    return 0;
}