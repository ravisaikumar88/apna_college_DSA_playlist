#include<iostream>
using namespace std;

void printsubstring(string s,string ans=""){
   
   if(s.length() == 0)
   {
      cout<<ans<<endl;
      return;
   }

   char ch=s[0];
   string ros = s.substr(1);

   printsubstring(ros,ans);
   printsubstring(ros,ans+ch);




}

int main()
{
    string str = "abc";
    printsubstring(str);
    return 0;
}