#include<iostream>
#include<cmath>
using namespace std;
//Check Prime

int main(){

    int flag = 0;
    int n;
    cin>>n;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i == 0){ // non prime
            cout << "Non-prime"<<endl;
            flag = 1;
            break;
        }
        

    }

    /*if(flag==0){
        cout<<"prime"<<endl;
    }*/

   // 16
   //  2 * 8
   //  4 * 4//
// 8 * 2
    return 0;
} 