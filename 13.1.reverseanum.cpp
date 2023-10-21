#include<iostream>
#include<cmath>
#include<math.h>
using namespace std;

int main(){
    //reverse a number
    int n;
    cin>>n;
    int reverse = 0;
    while (n>0)
    {
        int lastdigit = n%10;
        reverse = reverse * 10 + lastdigit;
        n = n/10; 
    }
    
    cout<<reverse<<endl;

    // 135
    // 531
    // 135 % 10 = 5 && 135 / 10 = 13
    // 13 % 10  = 3 && 13 / 10 = 1
    // 1 % 10 = 1 && 1 / 10 = 0
    
    // 5 --> 5*10 + 3 = 53 ; 53*10 + 1;


    

    
    return 0;
} 