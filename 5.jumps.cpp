#include<iostream>
using namespace std;

int main(){
    int pocketmoney = 3000;
    
    for(int date = 1;date<=30;date++){
        
        if(date%2==0){
            continue; //skip next part and continue next iteration
        }
        if(pocketmoney=0){
            break;
        }
        cout<<"GO OUT"<<endl;
        pocketmoney = pocketmoney-300;
        
    }
    return 0;
}