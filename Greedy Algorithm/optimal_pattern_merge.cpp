/*
Concept: We are given a vector we have to perform the given operation such a way that cost of doing 
         it is minimum.
            Operation :- Add the two elements of the vector and push their sum in the vector in such 
            a way that the sum of the different sums is minimum.
Dry Run:
V : 4 2 7 5
sorted v: 2 4  5 7

It 1:
sum = 2 + 4 = 6
v = 5 6 7
ans = 6

It 2:
sum = 5+6 = 11
v = 7 11
ans = 6+11 = 17

It 3:
sum = 7 + 11 = 18
v = 18
ans = 17 + 18 = 35
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    // Create the min heap
    priority_queue<int, vector<int>, greater<int>> p;

    // Push all the elements of the vector in the min heap
    for(int i=0;i<n;i++)
    {
        p.push(v[i]);
    }

    int ans = 0;
    int res = 0;
    // Iterate in a loop until the size of minheap is 1.
    while(p.size() != 1)
    {
        // add the top of the minheap in the ans.
        ans+=p.top();
        // pop the top element of the min heap.
        p.pop();
        // add the present top of the minheap in the ans.
        ans+=p.top();
        // pop the top present top element of the min heap.
        p.pop();
        // push the value of the ans in the min heap.
        p.push(ans);
        // add the ans to result.
        res += ans;
        //make ans = 0 for the next iteration
        ans = 0;
    }


    cout<<res<<endl;
}