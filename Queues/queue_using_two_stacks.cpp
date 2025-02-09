#include<bits/stdc++.h>
using namespace std;

class queuee{
    public:
    stack<int> s1;
    stack<int> s2;

    void enqueuee(int x)
    {
        s1.push(x);
    }

    int dequeuee()
    {
        if(s1.empty() and s2.empty())
        {
            cout<<"Queue is empty\n";
            return -1;
        }

        if(s2.empty())
        {
            while(!s1.empty())
            {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int topval = s2.top();
        s2.pop();
        return topval;
    };

    bool empty()
    {
        if(s1.empty() and s2.empty())
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
        cout<<"Empty Queue\n";
    }
    else{
        cout<<"Queue is not empty\n";
    }

}