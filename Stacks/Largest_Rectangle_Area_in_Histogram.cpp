/*
Concept:
Create two arrays:  1. To store the left height 2. To store the right height.

Iterate in the array of heights from left to right and if you find any ht smaller than the current ht then store the index of the ht in the array
and store the ht in the stack.

Iterate in the array of heights from right to left and if you find any ht smaller than the current ht then store the index of the ht in the array
and store the ht in the stack.

for any random index i.

maxArea = max(maxArea, (leftht[i] - Rightht[i] + 1) * height[i])

this way find the max area.




*/

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int largestRect(vector<int> a)
    {
        int n = a.size();
        stack<int> st;

        int leftht[n];
        int rightht[n];

        for(int i =0;i<n;i++)
        {
            while(!st.empty() && a[st.top()] >= a[i])
            {
                st.pop();
            }

            if(st.empty())
            {
                leftht[i] = 0;
            }
            else
            {
                leftht[i] = st.top() + 1;
            }
            st.push(i);
        }

        while(!st.empty())
        {
            st.pop();
        }

        for(int i = n-1;i>=i;i--)
        {
            while(!st.empty() && a[st.top()] >= a[i])
            {
                st.pop();
            }

            if(st.empty())
            {
                rightht[i] = n-1;
            }
            else
            {
                rightht[i] = st.top() - 1;
            }

            st.push(i);
        }

        int maxArea = 0;
        int sol = 0;
        for(int i=0;i<n;i++)
        {
            sol = (rightht[i] - leftht[i] + 1)*a[i];
            maxArea = max(maxArea, sol);
        }

        return maxArea;
    }
};

int main()
{
    vector<int> v;

    for(int i=0;i<7;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    solution s;

    int res = s.largestRect(v);

    cout<<res<<endl;
}