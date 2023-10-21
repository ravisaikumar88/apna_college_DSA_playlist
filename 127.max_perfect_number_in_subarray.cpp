#include<bits/stdc++.h>
using namespace std;

bool isNumberPerfect(int n)
{
    int sum = 1;
    for(int i = 2;i<sqrt(n);i++)
    {
        if(n%i == 0){
            if(i == n/i)
            {
                sum+=i;
            }else{
                sum+=i+n/i;
            }
        }
    }
    if(sum == n && n!=1)
    {
        return true;
    }
    return false;
}
int maxsum(int arr[],int n,int k)
{
    if(n<k)
    {
        return -1;
    }
    int sum = 0;
    int ans = 0;

    for(int i = 0;i<k;i++){
        sum+=arr[i];
    }

    ans = sum;

    for(int j=k;j<n;j++)
    {
        sum = sum - arr[j-k]+arr[j];

        ans = max(sum,ans);
    }

    return ans;
}

int maxPerfect(int arr[],int n,int k)
{
    for(int i=0;i<n;i++)
    {
        if(isNumberPerfect(arr[i]))
        {
            arr[i] = 1;
        }
        else{
            arr[i] = 0;
        }
    }

    return maxsum(arr,n,k);
}


int main()
{
    int arr[] = {1,2,3,4,5,6};
    int k = 2;
    cout<<maxPerfect(arr,6,k);
    

    return 0;
}  