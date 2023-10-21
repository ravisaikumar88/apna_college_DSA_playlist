#include<iostream>
#include<climits>
using namespace std;

int main(){

    int n;
    cin>>n;
    cin.ignore();

    char arr[n+1];
    cin.getline(arr,n);

    

    int count = 0 , maxi = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == ' '){
            count = 0;
        }
        else if(arr[i] == '\0'){
            break;
        }
        else{
            count++;
        }
        maxi = max(count,maxi);
    }
    
    cout<<maxi<<endl;
    
    return 0;

}