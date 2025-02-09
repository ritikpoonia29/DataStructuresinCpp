#include<bits/stdc++.h>
using namespace std;


int summ(int arr[], int n)
{
    int sum = 0;
    for(int i = 0;i<n;i++)
    {
        sum+=arr[i];
    }

    return sum;
}

bool isFeasible(int arr[], int mid, int n, int m)
{
    int no_of_students = 1;
    int sum = 0;

    for(int i=0;i<n;i++)
    {
        if(arr[i] > mid)
        {
            return false;
        }

        if((sum+arr[i]) > mid)
        {
            no_of_students++;
            sum = arr[i];

            if(no_of_students > m)
            {
                return false;
            }
        }
        else
        {
            sum+=arr[i];
        }
    }
    return true;
}

int PageAllocation(int arr[], int n, int m)
{

    if(n<m)
    {
        return -1;
    }

    int left = arr[0];
    int s = summ(arr, n);
    int right = s;
    int result = INT_MAX;   

    while(left<=right)
    {
        int mid = (left + right)/2;

        if(isFeasible(arr, mid, n, m))
        {
            result = min(result, mid);
            right = mid-1;
        }
        else{
            left = mid+1;
        }
    }

    return result;
}

int main()
{
    int n, m;

    cin>>n>>m;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<PageAllocation(arr, n, m)<<endl;
}