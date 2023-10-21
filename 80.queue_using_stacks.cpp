//Approach 1: Using two stacks

#include<iostream>
#include<stack>
using namespace std;

class que_u_sta{
    stack<int> st1;
    stack<int> st2;
public:
    void push(int x)
    {
        st1.push(x);
    }
    int pop()
    {
        if(st1.empty() && st2.empty())
        {
            cout<<"queue is empty\n";
            return -1;
        }
        if(st2.empty())
        {
            while (!st1.empty())
            {
                st2.push(st1.top());
                st1.pop();
            }
            
        }
        int topval = st2.top();
        st2.pop();
        return topval;
    }

    bool empty()
    {
        return (st1.empty() && st2.empty());
    }



};

int main()
{
    que_u_sta q;
    q.push(1);
    q.push(2);
    q.push(3);
    q.push(4);
    cout <<q.pop();
    return 0;
}