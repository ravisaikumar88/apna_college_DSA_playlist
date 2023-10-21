#include<iostream>
#include<deque>
using namespace std;

int main()
{
    deque<int> dt;
    dt.push_front(1);
    dt.push_back(2);
    dt.push_front(3);
    dt.push_back(4);

    for(auto i: dt)
    {
        cout<<i<<" ";
    }cout<<endl;

    dt.pop_back();
    dt.pop_back();
    dt.pop_front();

    for(auto i : dt){
        cout<<i<<" ";
    }cout<<endl;

    cout<<dt.size()<<endl;
    return 0;
}