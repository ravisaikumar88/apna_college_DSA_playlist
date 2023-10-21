#include<bits/stdc++.h>
using namespace std;

int peakelement(int arr[],int left,int high,int n)
{
    int mid = left + (high-left)/2;
    if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid])) 
    {
        return mid;
    }

    else if(mid > 0 && arr[mid-1]>arr[mid])
    {
        return peakelement(arr,left,mid-1,n);
    }
    else{
        return peakelement(arr,mid+1,high,n);
        
    }

}

int main()
{
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    cout<< peakelement(arr,0,5,6)<<endl;
    return 0;
}