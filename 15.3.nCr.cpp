#include<iostream>
using namespace std;
int factorial(int num){
    int product = 1;
    for(int i=2;i<=num;i++){
        product*=i;

    }
    return product;
}

int main(){
    int n,r;
    cin>>n>>r;
    if(n<r){
        cout<<"not possible"<<endl;
    }
    else{
        int result = factorial(n) / (factorial(n-r) * factorial(r));
        cout << result << endl;
    }
    return 0;
}