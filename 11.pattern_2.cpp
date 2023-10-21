#include<iostream>
using namespace std;

int main(){
    
    int row;
    cin >> row;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row+1-i;j++){
            cout<<j<<" ";
        }
        
        cout<<endl;
        
    }

    cout<<endl;
    cout<<endl;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            if((i+j) % 2 == 0){
                cout<<"1 ";
            }
            else{
                cout<<"0 ";
            }
           
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    //RHOMBUS PATTERN

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=row;j++){
            cout<<"* ";
        }cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    //NUMBER PATTERN

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout << endl;
    cout<<endl;

    for(int i = 1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout << "  ";
        }
        for(int j=i;j>0;j--){
            cout<<j<<" ";
        }
        for(int j=2;j<i+1;j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*"<<" ";
        }
        
        
        cout<<endl;
    }
    for(int i=row;i>0;i--){
        for(int j=1;j<=row-i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=2*i-1;j++){
            cout<<"*"<<" ";
        }
        
        
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    //ZIG ZAG 
    for(int i=1;i<=3;i++){
        for(int j=1;j<=row;j++){
            if((i+j)%4 == 0 || (i==2 && j%4==0)){
                cout<<"* ";
            }
            else{
                cout<<"  ";
            }
        }
        cout<<endl;
    }
    /*for(int i=1;i<=row;i++)
    {
        for(int j=1;j<=row-i;j++)
        {
            cout <<"  ";
        }
        for(int j=i;j>0;j--)
        {
            cout<<j<<" ";
        }
        for(int j = 2;j<i+1;j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }*/
    return 0;
}


// 1  _ _ _ 1 _ _ _
// 2  _ _ 2 1 2 _ _
// 3  _ 3 2 1 2 3 _
// 4  4 3 2 1 2 3 4