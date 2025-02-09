/*
Concept:

Create a deque and vector ans to store the result.
First push the index of first element into the deque. 
While pushing the second element check whether the element at index pushed earlier is greater than than the element to be pushed now.
If NO:- Then push the index.
If YES:- Pop the element from back of the dequeue.

If the elements present in the deque don't satisy the undergiven given condition then keep popping them from front until they satisfy
the condition.
    dq.front == k-i;


Dry Run:

    Vector: 1 3 -1 -3 5 3 6 7
    Dequeue at various interations:
    I1: Deq: 0
    I2: deq: 1   Because the element at index 1 is greater than the element at index 0 so pop the front of dequeue and then store the value of i.
    I3: Deq: 1 2
    I4: Deq: 1 2 3
    I5: Deq: 1 2 3   Now dq.front() == i - k so pop from front.
    I5: deq: 2 3   Now element at index 3 is less than element at index 4 so pop from back.
    I5: Deq: 2  Now element at index 2 is less than element at index 4 so pop from back.
    I5: Deq: 4
    .
    .
    .

    Do the same way and at last
    Deq: 7

*/

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:

    vector<int> maxslidingwindow(vector<int> a, int k)
    {
        vector<int> ans;

        deque<int> dq;

        for(int i = 0;i<a.size();i++)
        {
            if(!dq.empty() && dq.front() == i-k)
            {
                dq.pop_front();
            }

            while(!dq.empty() && a[dq.back()] <= a[i])
            {
                dq.pop_back();
            }

            dq.push_back(i);

            if(i >= k-1)
            {
                ans.push_back(a[dq.front()]);
            }
        }
        return ans;
    }
};

int main()
{
    vector<int> a;

    for(int i = 0;i < 8;i++)
    {
        int x;
        cin>>x;

        a.push_back(x);
    }

    solution s;
    vector<int> sol = s.maxslidingwindow(a, 3);

    for(int i =0 ;i<sol.size();i++)
    {
        cout<<sol[i]<<" ";
    }
    cout<<endl;
}
