#include<iostream>
#include<stack>
using namespace std;

class que{
    stack<int> s1;
    public:
        void push(int x)
        {
            s1.push(x);
        }
        int deq(){
            if(s1.empty()){
                cout<<"no element to pop"<<endl;
                return -1;
            }
            int x = s1.top();
            s1.pop();
            if(s1.empty())
            {
                return x;
            }   
            int item = deq();
            s1.push(x);
            return item;
        }

        bool empty()
        {
            return (s1.empty());
        }

};



int main()
{
    que q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<q.deq()<<endl;
    return 0;
}