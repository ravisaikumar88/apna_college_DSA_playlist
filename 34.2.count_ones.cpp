#include<iostream>
using namespace std;

void count(int n){
    int count = 0;
    while(n!=0){
        int p = n&n-1;
        n = p;
        count++;

    }
    cout << count << endl;
}
 

int main(){
    int n;
    cin >> n;

    count(n);
    return 0;
}