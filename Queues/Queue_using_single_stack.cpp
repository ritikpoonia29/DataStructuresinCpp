#include<bits/stdc++.h>
using namespace std;

class queuee{
    public:

    stack<int> s1;

    void enqueuee(int x)
    {
        s1.push(x);
    }

    int dequeuee()
    {
        if(s1.empty())
        {
            cout<<"Queue is empty\n";
            return -1;
        }

        int x = s1.top();
        s1.pop();

        if(s1.empty())
        {
            return x;
        }

        int item = dequeuee();
        s1.push(x);
        return item;
    }

    bool empty()
    {
        if(s1.empty())
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

    cout<<q.dequeuee()<<endl;

    if(q.empty())
    {
        cout<<"Empty Queue\n";
    }
    else{
        cout<<"Queue is not empty\n";
    }

    cout<<q.dequeuee()<<endl;

    if(q.empty())
    {
        cout<<"Emoty Queue\n";
    }
    else{
        cout<<"Queue is not empty\n";
    }

}