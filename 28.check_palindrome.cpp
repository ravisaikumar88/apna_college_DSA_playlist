#include<iostream>
using namespace std;

int main(){

    int n;
    cin>>n;

    char arr[n+1];
    cin >> arr;
    
    int s = 0;
    int e = n-1;
    int flag = 1;
    while (s<=e)
    {
        
        if(arr[s] != arr[e]){
            flag = 0;
            break;
        }
        s++;
        e--;

    }
    if(flag == true){
        cout << "palindrome"<<endl;
    }
    else{
        cout<<"Not a palindrome"<<endl;
    }
    
    
    return 0;
}