#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int s = 0, ans = INT_MAX;

    for(int i=0;i<k;i++)
    {
        s+=a[i];
    }
    ans = min(ans,s);
    for(int i=k;i<n;i++)
    {
        s = s-a[i-k]+a[i];
        ans = min(ans,s);
    }
    cout<<ans<<endl;
    return 0;
}