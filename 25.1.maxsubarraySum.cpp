#include<iostream>
using namespace std;
#include<climits>

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
            maxSum = max(sum,maxSum);
           
        }
    }

    cout << maxSum <<endl;
    return 0;
}