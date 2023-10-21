#include<bits/stdc++.h>
using namespace std;

void insertSortStack(stack<int> &st,int element)
{
    if(st.empty() || element>st.top())
    {
        st.push(element);
    }
    else{
        int temp = st.top();
        st.pop();
        insertSortStack(st,element);
        st.push(temp);
    }
}

void sortStack(stack<int> &st)
{
    if(!st.empty())
    {
        int temp = st.top();
        st.pop();
        sortStack(st);

        insertSortStack(st,temp);
    }
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(1);
    st.push(5);

    sortStack(st);

    while(!st.empty())
    {
        cout<<st.top()<<endl;
        st.pop();
    }
    return 0;
}