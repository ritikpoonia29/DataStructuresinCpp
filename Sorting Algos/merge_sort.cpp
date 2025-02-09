#include<bits/stdc++.h>
using namespace std;

void mergee(int v[], int low, int mid, int high)
{
    int n1 = mid-low+1;
    int n2 = high-mid;

    int temp1[n1];
    int temp2[n2];

    for(int i=0;i<n1;i++)
    {
        temp1[i] = v[low+i];
    }
    for(int i=0;i<n2;i++)
    {
        temp2[i] = v[mid+i+1];
    }

    int i = 0;
    int j = 0;
    int k = low;

    while(i<n1 && j<n2)
    {
        if(temp1[i] < temp2[j])
        {
            v[k] = temp1[i];
            k++;
            i++;
        }
        else
        {
            v[k] = temp2[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        v[k] = temp1[i];
        i++;
        k++;
    }

    while(j<n2)
    {
        v[k] = temp2[j];
        j++;
        k++;
    }
}
void mergesort(int v[], int low, int high)
{
    if(low>=high)
    {
        return;
    }

    int mid = (low+high)/2;
    mergesort(v, low, mid);
    mergesort(v, mid+1, high);
    mergee(v, low, mid, high);
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

    mergesort(v, 0, n-1);

    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }

}