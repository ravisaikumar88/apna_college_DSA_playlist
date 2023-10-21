#include<iostream>
using namespace std;

int binaryTodecimal(int n){
    int ans = 0;
    int x = 1;
    while(n>0)
    {
        int y = n%10;
        ans += x*y;
        x *=2;   // x = 1 --> x = 2 --> x = 2*2 = 4 ---> x = 4*2 = 8 --->
        n /= 10;
    }
    return ans;
}

int main(){
    int n;
    cin >> n;
    cout << binaryTodecimal(n) << endl;
    return 0;
}

// 1111
// 1111 % 10 = 1 && x*y = 1 && 
