#include<iostream>
using namespace std;

void check(int arr[],int n){
    int xorsum = 0;
    for(int i=0;i<n;i++){
        xorsum = xorsum^arr[i];
    }
    cout<<xorsum<<endl;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    check(a,n);
    return 0;
}