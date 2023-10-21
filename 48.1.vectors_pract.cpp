 #include<iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;

bool compare(pair<int,int> p1,pair<int,int> p2)
{
    return p1.first<p2.first;
}

int main(){
    int arr[] = {10,16,7,14,5,3,2,9};
    

    vector<pair <int,int>> v4;

    for(int i = 0;i<(sizeof(arr)/sizeof(arr[0]));i++)
    {
        v4.push_back(make_pair(arr[i],i));
    }

    sort(v4.begin(),v4.end(),compare);


    for(int i=0;i<v4.size();i++)
    {
        arr[v4[i].second] = i;
    }

    for(int i=0;i<v4.size();i++){
        cout<<arr[i]<<" ";
    }

    return 0;
 }