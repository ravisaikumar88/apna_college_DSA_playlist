#include<iostream>
using namespace std;

int tailing(int n){
   
    if(n==0)
    {
        return 0;
    }
    if(n==1){
        return 1;
    }  
    return tailing(n-1)+tailing(n-2);
}
int main()
{
    cout<<tailing(4)<<endl;
    return 0;
}