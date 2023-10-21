#include<iostream>
#include<string>
using namespace std;

int main(){
    
    string str = "adsaFaeda";
    for(int i=0;i<str.length();i++){
        if(str[i]>= 'a' && str[i] <= 'z')
            str[i] -= 32;
        else
            str[i] += 32;
    }
    cout<<str<<endl;
    return 0;

}