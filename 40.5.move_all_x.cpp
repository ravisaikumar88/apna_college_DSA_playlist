#include<iostream>
using namespace std;

string move(string s,string ans="",string ans2="")
{
    int count = 0;
    if(s.length() == 0)
    {
        return ans+ans2;
    }
    if(s[0] =='x')
    {
        ans2 += s[0];
    }
    else
    {
        ans+=s[0];
    }

    return move(s.substr(1),ans,ans2);
    
    

}




int main()
{
    string s;
    cin>>s;
    cout << move(s) <<endl;
    return 0;
}