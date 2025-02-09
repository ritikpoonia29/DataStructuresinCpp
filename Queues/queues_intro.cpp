#include<bits/stdc++.h>
using namespace std;
#define n 20

class queuee
{
    int *arr;
    int front;
    int back;

    public:
    queuee()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueuee(int x)
    {
        if(back == n-1)
        {
            cout<<"queuee is Full.\n";
            return;
        }

        back++;
        arr[back] = x;

        if(front == -1)
        {
            front++;
        }
    }

    void dequeuee()
    {
        if(back == -1 || front>back)
        {
            cout<<"queuee is empty\n";
            return;
        }
        front++;
    }

    int peek()
    {
        if(back == -1 || front>back)
        {
            cout<<"queuee is empty\n";
            return -1;
        }

        return  arr[front];
    }

    bool empty()
    {
         if(back == -1 || front>back)
        {
            return true;
        }

        return false;
    }
};

int main()
{
    queuee q;

    q.enqueuee(1);
    q.enqueuee(2);
    q.enqueuee(3);
    q.enqueuee(4);

    cout<<q.peek()<<endl;
    q.dequeuee();
    q.dequeuee();
    q.dequeuee();
    if(q.empty())
    {
        cout<<"Queue is empty\n";
    }
    else{
        cout<<"Queue is not empty\n";
    }

    cout<<q.peek()<<endl;
    q.dequeuee();

    if(q.empty())
    {
        cout<<"Queue is empty\n";
    }
    else{
        cout<<"Queue is not empty\n";
    }
    cout<<q.peek()<<endl;


    

}