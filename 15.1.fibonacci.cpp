#include<iostream>
using namespace std;

int fibonacci(int num){
    int t1 = 0;
    int t2 = 1;
    int nextTerm;
    for(int i=1;i<=num;i++){
        cout<<t1<<endl;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return 0;
    
}

int main(){

    int n;
    cin>>n;

    fibonacci(n);
    
    return 0;
}