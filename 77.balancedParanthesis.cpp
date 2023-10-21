#include<iostream>
#include<stack>
using namespace std;

bool isValid(string s)
{
    int n = s.size();
    stack<char> st;

    

    for(int i =0;i<n;i++)
    {
        if(s[i] == '{' || s[i] == '[' || s[i] == '(')
        {
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            if(st.top() == '(')
            {
                return true;
            }
            else{
                return false;
            }
        }
        else if(s[i] == '}')
        {
            if(st.top() == '{')
            {
                return true;
            }
            else{
                return false;
            }
        }
        else
        {
            if(st.top() == '[')
            {
                return true;
            }
            else{
                return false;
            }
        }
        
    }
    return false;


}

int main()
{
    string s = "{({[)})}";
    if(isValid(s))
    {
        cout << "Valid String"<<endl;
    }
    else{
        cout << "Not a Valid"<<endl;
    }
    return 0;
}