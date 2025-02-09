/*
Concept: We have to find a subarray of size k with the maximum sum which is less than x;
Approach:

Brute force: keep iterating over the array again and again and find the max sum less than x.
            TC: O(n*k);
Optimised: First find the sum of first k elements.
           Check whether than sum is less than x or not. If it is then store it in answer.
           Now iterate over a array from i = k to i = n-1;
           At every iteration subtract the element at index i-k from the sum and add the element at index i in the sum.
           Check if sum is less than x then compare it with the previous value of ans and store the maximum one.
*/

#include<bits/stdc++.h>
using namespace std;
class solution{
    public:
int max_sum_subarray(int arr[], int n, int k, int x)
{
    int sum = 0;
    int ans = -1;

    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }

    if(sum < x)
    {
        ans = sum;
    }

    for(int i=k;i<n;i++)
    {
        sum-=arr[i-k];
        sum+=arr[i];

        if(sum<x)
        {
            ans = max(ans, sum);
        }
    }

    return ans;
}
};
int main()
{
    solution sol;
    int n;
    int x;
    int k;

    cin>>n>>k>>x;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int res = sol.max_sum_subarray(arr, n, k, x);
    cout<<res<<endl;
}