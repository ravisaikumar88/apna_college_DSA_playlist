#include<iostream>
using namespace std;

void increment(int *a){
    ++*a;
}
int main(){
    int a=2;
    int b=4;

    increment(&b);

    cout<<b<<endl;
    return 0;
}