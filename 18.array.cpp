#include<iostream>
#include<bits/stdc++.h>as
using namespace std;

int main(){
    int arr[4]={1,2,3,4};
    cout<<arr[2]<<endl;

    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}