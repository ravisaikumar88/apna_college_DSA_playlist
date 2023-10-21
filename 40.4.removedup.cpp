//Simple Program to remove Duplicate characters (using recursion , find() function) - Made Easy

#include <bits/stdc++.h>
using namespace std;
string remdup(string str,string ans="")
{
    if(str.length()==0)
        return ans;
        
    if (ans.find(str[0]) != string::npos)
    	return remdup(str.substr(1),ans);
    	
	else
		return remdup(str.substr(1),ans+str[0]); 	
}
int main(){
    string s;
    cin >> s;
    cout<<remdup(s);
    return 0;
}
