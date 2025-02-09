#include<stdio.h>


void merge (int arr[], int l, int mid, int r)
{
    int n1 = mid+1 - l;
    int n2 = r - mid;

    int a[n1];
    int b[n2];

    for(int i=0;i<n1;i++)
    {
        a[i] = arr[l+i];
    }
    for(int i=0;i<n2;i++)
    {
        b[i] = arr[mid + 1 + i];
    }

    int i=0;
    int j=0;
    int k = l;

    while(i<n1 && j<n2)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            i++;
            k++;
        }
        else{
            arr[k] = b[j];
            j++;
            k++;
        }
    }

    while(i<n1)
    {
        if(a[i]<b[j])
        {
            arr[k] = a[i];
            k++;
            i++;
        }
    }
    
    while(j<n2)
    {
        if(b[j]<a[i])
        {
            arr[k] = b[j];
            k++;
            j++;
        }
    }
}

void mergesort(int arr[], int l, int r)
{

    int mid = (l+r)/2;

    if(l<r)
    {
        mergesort(arr, l, mid);
        mergesort(arr, mid+1, r);

        merge (arr, l, mid, r);
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    
    int r = n-1;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        scanf("%d", &arr[i]);
    }

    mergesort(arr, 0, r);

    for(int i=0;i<n;i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}