#include<iostream>
using namespace std;
#include<climits> 

bool check(int arr[],int n,int k){
    int low = 0;
    int high = n-1;
    while (low<high)
    {
    
    
        if(arr[low]+arr[high] == k){
            cout<< low << " " << high <<endl;
            return true;
        }
        else if(arr[low]+arr[high]<k){
            low++;
        }
        else{
            high++;
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

    int counter = 1;
    while (n>counter)
    {
        for(int i=0;i<n-counter;i++){
            if(a[i]>a[i+1]){
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
            }
        }
        counter++;
    }
    for(int i=0;i<n;i++){
        cout<<a[i]<< " ";
    }
    cout<<endl;
    int pairsum = check(a,n,k);
    cout << pairsum << endl;

    return 0;
}

