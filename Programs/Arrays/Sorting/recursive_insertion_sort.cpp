#include<bits/stdc++.h>
using namespace std;

void rec_insertion_sort(int arr[], int n)
{
    if(n == 1)
    {
        return;
    }

    rec_insertion_sort(arr, n-1);

    int last = arr[n-1];
    int i = n-2;
    for(i=n-2;i>=0&& arr[i] > last;i--)
    {
        arr[i+1] = arr[i];
    }
    arr[i+1] = last;

}
int main()
{
    int n;
    cin>>n;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    rec_insertion_sort(arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }cout<<"\n";
}