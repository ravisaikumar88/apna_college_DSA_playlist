#include<iostream>
using namespace std;

void checkpowof (int n){
    if((n&n-1) == 0){
        cout << "power of 2" << endl;
    }
    else{
        cout << "not a power of 2"<<endl;
    }
}

int main(){
    int n;
    cin >> n;

    checkpowof(n);
    return 0;
}