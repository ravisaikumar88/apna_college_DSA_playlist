#include<iostream>
using namespace std;
//SPIRAL ORDER

int main(){
    int n,m;
    cin >> n >>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    int ta[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            ta[i][j] = a[j][i];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<ta[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}