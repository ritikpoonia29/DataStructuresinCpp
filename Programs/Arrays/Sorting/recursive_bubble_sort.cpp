#include<bits/stdc++.h>
using namespace std;

void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void rec_bubble_sort(int arr[], int n)
{
    if(n == 1)
    {
        return;
    }
    bool flag = true;
    for(int j=0;j<=n-2;j++)
    {
        if(arr[j] > arr[j+1])
        {
            int temp = arr[j+1];
            arr[j+1] = arr[j];
            arr[j] = temp;
            flag = false;
        }
    }

    if(flag)
    {
        return;
    }
    
    rec_bubble_sort(arr, n-1);
}
int main()
{
    int n;
    cin>>n;

    int v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    rec_bubble_sort(v, n);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}