#include<iostream>
#include<vector>
#include<cstring>
#include<algorithm>
using namespace std;

void dnf(int arr[],int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;

    while(mid<=high){
        if(arr[mid] == 0){
            swap(arr[low],arr[mid]);
            low++;mid++;
        }
        if(arr[mid] == 1)
        {
            mid++;
        }
        if(arr[mid] == 2)
        {
            swap(arr[high],arr[mid]);
            high--;
        }
    }
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    dnf(arr,n);
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}