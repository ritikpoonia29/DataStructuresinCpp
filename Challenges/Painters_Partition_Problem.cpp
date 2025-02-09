#include<bits/stdc++.h>
using namespace std;

bool isFeasible(int arr[], int mid, int n, int m)
{
    int nop = 1;
    int sum = 0;

    for(int i =0;i<n;i++)
    {
        if(arr[i]>mid)
        {
            return false;
        }

        if((sum+arr[i])>mid)
        {
            nop++;
            sum = arr[i];

            if(nop>m)
            {
                return false;
            }
        }
        else{
            sum+=arr[i];
        }
    }

    return true;
}

int PaintersPrblm(int arr[], int n, int m)
{
    sort(arr, arr+n);

    int left = arr[0];

    int sum = 0;
    int result = INT_MAX;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
    }

    int right = sum;

    while(left<=right)
    {
        int mid = (left+right)/2;

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

    cout<<PaintersPrblm(arr, n, m)<<endl;

}