#include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;



int main(){

    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.push_back(3);


    for(auto i:v)
    {
        cout << i<< endl;
    }

    v.pop_back();
    for(auto i:v)
    {
        cout << i<< endl;
    }
    vector<int> v2(3,50);
    swap(v,v2);
    for(auto i:v)
    {
        cout << i<< endl;
    }
    vector<int> v3 = {3,6,2,4};
    sort(v3.begin(),v3.end());
    for(auto i:v3)
    {
        cout << i<< endl;
    }

   
    return 0;
}