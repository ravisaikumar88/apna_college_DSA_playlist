#include<bits/stdc++.h>
#include<cmath>
#include<algorithm>
#include<climits>
using namespace std;

void maxSubarraySum(int arr[],int n,int k,int x)
{
    int sum = 0; int ans = 0;
    for(int i = 0;i<k;i++)
    {
        sum+=arr[i];
    }
    
    if(sum < x)
    {
        ans = sum;
    }

    for(int i = k;i<n;i++)
    {
        sum = sum - arr[i-k] + arr[i];
        
        if(sum<x)
        {
            ans = max(ans,sum);
        }

    }

    cout<<ans<<endl;
    
}


int main()
{
    int arr[] = {7,5,4,6,8,9};
    maxSubarraySum(arr,6,3,20);
    return 0;
}