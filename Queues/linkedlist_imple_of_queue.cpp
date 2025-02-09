#include<bits/stdc++.h>
using namespace std;

struct node{
    node *next;

    int data;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};

class queuee{

    node* front;
    node* back;

    public:
    queuee()
    {
        front = NULL;
        back = NULL;
    }

    void enqueuee(int x)
    {
        node *n = new node(x);

        if(front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }

    void dequeuee()
    {
        if(front == NULL)
        {
            cout<<"Queue is empty\n";
            return;
        }
        node* todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek()
    {
        if(front == NULL)
        {
            cout<<"Queue is empty\n";
            return -1;
        }

        return front->data;
    }

    bool empty()
    {
        if(front == NULL)
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