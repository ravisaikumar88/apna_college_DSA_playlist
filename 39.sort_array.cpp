#include<iostream>
using namespace std;

bool sorted(int arr[],int n){
    
    if(n==1)
    {
        return 1;
    }

    bool restArray = sorted(arr+1,n-1);
    return (arr[0]<arr[1] && restArray);
         
    
}

int main(){

    int arr[]={1,2,3,4,7,6};
    cout << sorted(arr,6)<<endl;
    return 0;
}