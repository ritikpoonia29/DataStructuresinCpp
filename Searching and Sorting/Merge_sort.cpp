#include<bits/stdc++.h>
using namespace std;

void merge(int a[], int l, int mid, int r)
{
    int n1 = mid+1-l;
    int n2 = r-mid;

    int b[n1];
    int c[n2];

    for(int i=0;i<n1;i++)
    {
        b[i] = a[l+i];
    }
    for(int j=0;j<n2;j++)
    {
        c[j] = a[mid + 1 + j];
    }

    int i=0,j=0, k=l;

    while(i<n1 && j<n2)
    {
        if(b[i]<c[j])
        {
            a[k] = b[i];
            k++;
            i++;
        }
        else
        {
            a[k] = c[j];
            k++;
            j++;
        }
    }

    while(i<n1)
    {
        a[k] = b[i];
        k++;
        i++;
    }

    while(j<n2)
    {
        a[k] = c[j];
        k++;
        j++;
    }
}
void mergesort(int a[], int l, int r)
{
    int mid = (l+r)/2;

    if(l<r)
    {
        mergesort(a, l, mid);
        mergesort(a, mid+1, r);

        merge(a, l, mid, r);
    }
}
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int r = n-1;

    mergesort(a, 0, r);

    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }cout<<endl;
}

