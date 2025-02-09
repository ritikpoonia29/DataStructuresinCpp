/*
Concept: Push the elements in only q2. If there is any element in q1 push it into q2 and pop it from q1 and then swap the queues.
Dry Run:
 q1: 1 2 3 4.
 push 5 in the stack.
  s1. push 5 in q2.
    q2: 5
  s2. push all the elements of q1 into q2.
    q1 : (NULL)
    q2 : 1 2 3 4 5
  s3. Swap q1 and q2 using a temp queue.
    q1: 1 2 3 4 5
    q2: (NULL)
*/

#include<bits/stdc++.h>
using namespace std;

class Stack{
    int n;
    queue<int> q1;
    queue<int> q2;

    public:
    Stack(){
        n = 0;
    }

    void push(int x)
    {
        q2.push(x);
        n++;

        while(!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }

        queue<int> temp = q1;
        q1 = q2;
        q2 = temp;
    }

    void pop()
    {
        q1.pop();
        n--;
    }

    int top()
    {
        return q1.front();
    }

    int size()
    {
        return n;
    }    
};


int main(){

    Stack s;

    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);

    cout<<s.top()<<endl;

    s.pop();
    s.pop();
    s.pop();

    cout<<s.top()<<endl;
    
}