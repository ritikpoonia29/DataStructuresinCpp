#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key)
{
    int start = 0;
    int end = n;

    int mid = (start + end)/2;

    while(start<=end)
    {
        if(arr[mid] == key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            mid = end-1;
        }

        else{
            mid = start+1;
        }
    }

    return -1;
}

int main()
{
    int n;
    cin>>n;

    int key;
    cin>>key;

    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    cout<<binarySearch(arr, n, key)<<endl;
}