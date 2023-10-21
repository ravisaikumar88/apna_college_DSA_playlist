#include<iostream>
using namespace std;
 #define n 100
class queue{
    int* arr;
    int front;
    int back;
    public:
    queue(){
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x)
    {
        if(back == n-1)
        {
            cout<<"queue overflow"<<endl;
            return;
        }
        back++;
        arr[back] = x;
        if(front == -1)
        {
            front++;
        }
    }

    void dequeue()
    {
        if(front == -1 || front>back)
        {
            cout<<"no element to dequeue"<<endl;
            return;
        }
        front++;
    }

    int peek()
    {
        if(front == -1 || front>back)
        {
            cout<<"no element in queue"<<endl;
            return -1;
        }
       return arr[front];
    }
    bool empty()
    {
        return (front == -1 || front>back);
    }
    
};

int main()
{
    queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    cout<<q.peek()<<endl;
    q.dequeue();
    q.dequeue();
    q.dequeue();
    cout << q.empty();
    return 0;
}