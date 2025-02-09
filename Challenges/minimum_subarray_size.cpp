/*
Concept: We have to find that subarray whose size is minimum and the sum is greater than x.

Approach:
Take two pointers named i) start = 0 and  ii) end = 0;
Iterate in the array until end < n and add the element to sum and store it in sum.
If sum>x
Then start subtracting the elements from the starting until the sum is less than or equal to x and increase the start pointer by 1 everytime.
store the minimum of ans and end-start+2 in the ans.
If sum is not greater than x
then increase end by 1.
*/

#include<bits/stdc++.h>
using namespace std;

int min_size(int arr[], int n, int x)
{
    int start = 0;
    int end = 0;
    int sum = 0;
    int ans = INT_MAX;
    int count = 0;
    
    while(end<n)
    {
        sum+=arr[end];

        if(sum>x)
        {
            while(sum>x)
            {
                sum-=arr[start];
                start++;
            }
            ans  = min(ans, end-start+2);
        }
        end++;
    }
    return ans;
}
int main()
{
    int n, x;
    cin>>n>>x;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<min_size(arr, n, x)<<endl;
}