#include<iostream>
#include<cmath>
using namespace std;

int main(){
     //armstrong number
    int n;
    cin>>n;
    int sum = 0;
    int original = n;
    while(n>0)
    {
        int lastdigit = n%10;
        sum += pow(lastdigit,3); //(lastdigit)^3
        n = n/10;
    }
    if(sum == original){
        cout << "Yes armstrong";
    }
    else{
        cout<<"no armstrong";
    }
    return 0;
}