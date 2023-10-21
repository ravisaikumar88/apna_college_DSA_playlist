#include<bits/stdc++.h>
using namespace std;

bool isFeasible(int mid,int arr[],int n,int k)
{
    int pos = arr[0], elements = 1;

    for(int i = 1;i<n;i++)
    {
        if(arr[i] - pos >= mid)
        {
            pos = arr[i];
            elements++;
        
        if(elements == k)
        {
            return true;
        }
        }
    }
    return false;

}

int largestMinDistance(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int result = -1;
    int left = 1;
    int right = arr[n-1];
    //int flag = 0;
    while(left<right)
    {
        int mid = (left+right)/2;
        if(isFeasible(mid,arr,n,k))
        {
            //flag++;
            result = max(result,mid);
            left = mid+1;
            //cout<<left<<endl;
        }
        else{
            right = mid;
        }
            }
        //cout<<flag<<endl;
        return result;
}

int main()
{
    int arr[] = {11,2,7,5,1,2};
    int n = 6;
    int k = 3;

    cout<<largestMinDistance(arr,n,k)<<endl;
    return 0;
}