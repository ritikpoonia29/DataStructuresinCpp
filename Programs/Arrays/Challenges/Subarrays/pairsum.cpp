#include<iostream>
using namespace std;

bool pairsum(int n, int arr[], int sum)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i] + arr[j] == sum)
            {
                return true;
            }
        }
    }
    return false;
}
int main()
{
    int n;

    int sum;
    cin>>n;
    cin>>sum;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<pairsum(n, arr, sum)<<endl;
}
