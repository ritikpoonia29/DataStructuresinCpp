/*
Concept: Push all the elements in q1. For popping from stack push the elements of q1 into q2 until only one element 
remains in q1. Pop from q1. Swap the queues.

Dry Run: 
q1:  1 2 3 4 5

Pop the element from the stack. i.e. 1 should be popped as per the property of stack but if we will pop directly then 5 will be popped so now.
    s1. Push the elements of q1 into q2 until only 1 remains in q1.
        q1: 1
        q2: 2 3 4 5
    s2. Pop from q1
        q1: (NULL)
        q2: 2 3 4 5
    s3. Swap the queues using a temp queue.
        q1: 2 3 4 5
        q2: (NULL)
*/

#include<bits/stdc++.h>
using namespace std;

class Stack{

    int n;
    queue<int> q1;
    queue<int> q2;

    public:
    Stack()
    {
        n = 0;
    }

    
    void pop()
    {
        if(q1.empty())
        {
            return;
        }

        while(q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        q1.pop();
        n--;

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void push(int x)
    {
        q1.push(x);
        n++;
    }


    int top()
    {
        if(q1.empty())
        {
            return -1;
        }

        while(q1.size() != 1)
        {
            q2.push(q1.front());
            q1.pop();
        }

        int ans = q1.front();
        q2.push(ans);

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;

        return ans;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(3);

    cout<<s.top()<<endl;

    s.pop();
    s.pop();

    cout<<s.top()<<endl;
}