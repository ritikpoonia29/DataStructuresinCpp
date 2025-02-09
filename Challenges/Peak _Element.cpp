/*
Peak element is that element of array whose left element and the right element are smaller than it.
For eg: Array : 2 4 5 6 8 7
Here 8 is the peak element.

*/

#include<bits/stdc++.h>
using namespace std;

class solution{
    public:

int peakelement(int arr[], int low, int high, int n)
{
    int mid = low + (high-low)/2;   // We use this formula because sometimes high+low crosses the range of int.

    if((mid == 0 || arr[mid-1] <= arr[mid]) && (mid == n-1 || arr[mid+1] <= arr[mid]))
    {
        return mid;
    }
    else if(mid > 0 && arr[mid-1] > arr[mid])
    {
        return peakelement(arr, low, mid-1, n);
    }
    else if(mid < n-1 && arr[mid+1] > arr[mid])
    {
        return peakelement(arr, mid+1, high, n);
    }
}
};

int main()
{
    solution sol;
    int n;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    int res = sol.peakelement(arr, 0, n-1, n);
    cout<<res<<endl;
}