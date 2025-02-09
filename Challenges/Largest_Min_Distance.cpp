#include<bits/stdc++.h>
using namespace std;

bool isFeasible(int arr[], int mid, int n, int k)
{
    int pos = arr[0];
    int no_of_elements = 1;

    for(int i = 0;i<n;i++)
    {
        if(arr[i] - pos >= mid)
        {
            pos = arr[i];
            no_of_elements++;

            if(no_of_elements == k)
            {
                return true;
            }
        }
    }
    return false;
}

int LargestMinDistance(int arr[], int n, int k)
{
    sort(arr, arr+n);

    int result = -1;
    int left = arr[0];
    int right = arr[n-1];

    while(left<right)
    {
        int mid = (left+right)/2;

        if(isFeasible(arr, mid, n, k))
        {
            result = max(result, mid);
            left = mid+1;
        }
        else{
            right = mid;
        }
    }

    return result;
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


    cout<<LargestMinDistance(arr, n, k)<<endl;

}