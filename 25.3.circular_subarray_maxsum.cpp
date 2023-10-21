#include<iostream>
using namespace std;
#include<climits>

int kadane(int a[],int n){
    int currentSum = 0;
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        currentSum += a[i];
        maxSum = max(maxSum,currentSum);
        if(currentSum < 0){
            currentSum = 0;

        }
        
    }
    return maxSum;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int wrapSum;
    int nonwrapSum;

    nonwrapSum = kadane(a,n);
    cout<<nonwrapSum<<endl;
    int totalSum = 0;
    for(int i=0;i<n;i++){
        totalSum+=a[i];
        a[i] = -a[i];
    }
    wrapSum = totalSum + kadane(a,n);
    cout<<wrapSum<<endl;
    cout<<max(wrapSum,nonwrapSum)<<endl;
return 0;
}