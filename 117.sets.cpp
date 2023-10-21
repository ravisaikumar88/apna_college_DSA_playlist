#include<bits/stdc++.h>

using namespace std;


void print(set<string> &s)
{
    for(string value : s)
    {
        cout << value << endl;
    }

}

int main()
{
    set<string> s;
    s.insert("abc");  //log(n)
    s.insert("zsdf");
    s.insert("bcd");
    s.insert("abc");
    
   /* auto it = s.find("abcd");

    if(it != s.end())
    {
        cout<<"yes it is found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }*/
    print(s);
    return 0;
}
