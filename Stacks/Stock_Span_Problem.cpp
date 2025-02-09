/*
Concept: In this problem we were given a vector of the prices of a stack for n number of days. we hvae to find for any i'th day
for how many days the price was less than the price on the i'th day.

Approach:
Create a vector and a stack.
store the s[0] = 1.
Pop the value from the stack if stack is not empty and the price of the stock on that day is smaller than the price[st.top()];
if stack is empty then store the value of s[i] as i+1
else store the value of s[i] as i - st.top();

after these operations push the value of i in the stack.

Dry Run:
    Prices: 100 80 60 70 60 75 85
    stack : (NULL)
    sol[] : (NULL);

    Day 1:
    stack = 0
    sol[0] = 1

    Day 2:
    stack = 0 1 
    sol[1] = 1 1

    Day 3:
    stack = 0 1 2
    sol[2] = 1 1 1

    Day 4: 
    stack = 0 1
    sol[3] = 1 1 1 2

    Day 5:
    stack = 0 1 4
    sol[4] = 1 1 1 2 1

    Day 6:
    stack = 0 1
    sol[5] = 1 1 1 2 1 4

    day 7:
    stack: 0
    sol[6] = 1 1 1 2 1 4 6
*/

#include<bits/stdc++.h>
using namespace std;

void calculatespan(vector<int> a, int n, int sol[])
{
    stack<int> st;

    
}
vector<int> stockspan(vector<int> a, int n)
{
    vector<int> ans;
    int sol[n];

    calculatespan(a, n, sol);

    for(int i=0;i<n;i++)
    {
        ans.push_back(sol[i]);
    }
    return ans;
}
int main()
{
    vector<int> a;
    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;

        a.push_back(x);
    }

    vector<int> res = stockspan(a, 7);

    for(auto i: res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}