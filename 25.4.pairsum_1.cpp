#include<iostream>
using namespace std;
#include<climits>

bool pairsum(int arr[],int n,int k){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j] == k){
                cout << i+1<<" "<<j+1<<endl;
                return true;
            }
        }
    } 
    return false;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int k;
    cin>>k;

    cout << pairsum(a,n,k)<<endl;
    return 0;
}