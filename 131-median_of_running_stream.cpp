#include<bits/stdc++.h>
using namespace std;

priority_queue<int,vector<int>,greater<int>> pqmin;
priority_queue<int,vector<int>> pqmax;

void insert(int x)
{
    if(pqmin.size() == pqmax.size())
    {
        if(pqmax.size() == 0)
        {
            pqmax.push(x);
            return;
        }
        if(x < pqmax.top())
        {
            pqmax.push(x);

        }
        else{
            pqmin.push(x);
        }
    }
    else
    {
        //two cases possible
        // Case 1 : size of maxHeap > size of minHeap
        // Case 2 : size of minHeap > size of maxHeap

        if(pqmax.size() > pqmin.size())
        {
            if(x >= pqmax.top())
            {
                pqmin.push(x);
            }
            else
            {
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else
        {
            if(x<=pqmax.top())
            {
                pqmax.push(x);
            }
            else{
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

double findMedian()
{
    if(pqmin.size() == pqmax.size())
    {
        return ((pqmin.top()+pqmax.top())/2.0);
    }
    else if(pqmax.size()>pqmin.size())
    {
        return pqmax.top();
    }
    else{
        return pqmin.top();
    }
}

int main()
{
    insert(10);
    cout<<findMedian()<<endl;
    insert(9);
    cout<<findMedian()<<endl;insert(11);
    cout<<findMedian()<<endl;insert(12);
    cout<<findMedian()<<endl;insert(8);
    cout<<findMedian()<<endl;insert(14);
    cout<<findMedian()<<endl;insert(7);
    cout<<findMedian()<<endl;insert(15);
    cout<<findMedian()<<endl;
    return 0;
}