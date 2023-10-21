#include<iostream>
using namespace std;

int main(){

    int row,col;
    cin>>row>>col;

    for(int i=1;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<"* ";
        }
        cout<<endl;
    }  //RECTANGLE
    cout<<endl;
    cout<<endl;

    //HOLLOW RECTANGLE

    for(int i = 1; i<=row;i++){
        for(int j=1;j<=col;j++){
            if(i==1||i==row||j==1||j==col){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    
    cout << endl;
    cout << endl;

    //INVERTED HALF PYRAMID

    for(int i=0;i<row;i++){
        for(int j=0;j<row-i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
     cout << endl;
    cout << endl;
    
    //HALF PYRAMID AFTER 180 ROTATION

    for(int i = 1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(j<row-i+1){
                cout<<"  ";
            }
            else{
                cout<<"* ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
    //HALF PYRAMID USING NUMBERS

    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i>=j){
                cout<<i<<" ";
            }
            
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;
    
    //FLOYDS TRIANGLE
    int count=1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=row;j++){
            if(i>=j){
                
                cout<<count<<" ";
                count++;
            }
        }
        cout<<endl;
    }

    cout<<endl;
    cout<<endl;

    //BUTTERFLY PATTERN

    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*row - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=row;i>=1;i--){
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        int space = 2*row - 2*i;
        for(int j=1;j<=space;j++){
            cout<<" ";
        }
        for(int j=1;j<=i;j++){
            cout<<"*";
        }
        cout<<endl;
    }

    
    return 0;
} 