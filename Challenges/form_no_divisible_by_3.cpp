/*
Concept:  Form a number using the k elements of the array such that it is divisible by 3.
          The sum of the digits of the number must be divisble by 3 for the number to be divisible by 3. 
Approach: Find the sum of first k elements of the array.
    if the sum is divisible by 3 then return the number.
    else
    Keep subtracting the elements in the front of the array from sum and add the elements of the array after i = k until we find a sum
    divisble by 3.
*/

#include<bits/stdc++.h>
using namespace std;

vector<int> no_formed(int arr[], int n, int k)
{
    vector<int> v;
    int sum = 0;

    if(n<k)
    {
        return v;
    }

    for(int i=0;i<k;i++)
    {
        sum+=arr[i];
    }

    int start = 0;
    for(int i=k;i<n;i++)
    {
        if(sum % 3 == 0)
        {
            v.push_back(arr[i-k+1]);
            v.push_back(arr[i-(k-2)]);
            v.push_back(arr[i-(k-3)]);
            break;
        }

        sum-=arr[start];
        sum+-arr[i];
        start++;
    }

    return v;
}
int main()
{
    int n, k;
    cin>>n>>k;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> res = no_formed(arr, n, k);

    for(auto i: res)
    {
        cout<<i;
    }
    cout<<endl;
}