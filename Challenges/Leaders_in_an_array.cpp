/*
Concept: The element which is larger than all the elements on its right is called a leader.
Approach:
    Take a variable named max and assign INT_MIN to it.
    Traverse in the array from the end of the array and if any element is greater than the max then assign it to max and push max
    into the answer vrector.

    Reverse the answer vector and return it.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> leader(int arr[], int n)
{
    vector<int>ans;
       int max = INT_MIN;
       for(int i=n-1;i>=0;i--)
       {
         if(arr[i]>=max)
         {
             max = arr[i];
             ans.push_back(arr[i]);
         }
       }
       reverse(ans.begin(),ans.end());
       return ans;
}
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i =0 ;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> res = leader(arr, n);

    for(auto i: res)
    {
        cout<<i<<" ";
    }cout<<endl;
}