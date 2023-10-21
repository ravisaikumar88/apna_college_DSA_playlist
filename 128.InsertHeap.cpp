#include<bits/stdc++.h>
using namespace std;

void insertHeap(int arr[],int n,int value)
{
    n = n+1;
    arr[n-1] = value;
    int i = n;
    while(i>1){
    int parent = i/2;
    
    if(arr[parent-1] < arr[i-1])
    {
        swap(arr[parent-1],arr[i-1]);
        i = parent;
    }
    else{
        return;
    }
    }
}

int main()
{
    int arr[]={70,50,40,45,35,39,16,10,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int value;
    cin>>value;
    insertHeap(arr,n,value);
    int x = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    return 0;
}