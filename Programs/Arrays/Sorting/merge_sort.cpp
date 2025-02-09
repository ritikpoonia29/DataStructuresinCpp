#include <bits/stdc++.h>
using namespace std;

void print(int v[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
}

void merge(int arr[], int l, int mid, int r)
{
    int n1 = mid + 1 - l;
    int n2 = r - mid;

    int b[n1];
    int c[n2];

    for (int i = 0; i < n1; i++)
    {
        b[i] = arr[l + i];
    }

    for (int j = 0; j < n2; j++)
    {
        c[j] = arr[mid + 1 + j];
    }
    int k = l;
    int i = 0, j = 0;

    while (i < n1 && j < n2)
    {
        if (b[i] < c[j])
        {
            arr[k] = b[i];
            k++;
            i++;
        }
        else
        {
            arr[k] = c[j];
            j++;
            k++;
        }
    }

    while (i < n1)
    {
        arr[k] = b[i];
        i++;
        k++;
    }

    while (j < n2)
    {
        arr[k] = c[j];
        j++;
        k++;
    }
}
void mergeSort(int arr[], int l, int r)
{
    int mid = (l + r) / 2;
    if (l < r)
    {
        mergeSort(arr, l, mid);
        mergeSort(arr, mid + 1, r);

        merge(arr, l, mid, r);
    }
}
int main()
{
    int n;
    cin >> n;

    int v[n];

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    mergeSort(v, 0, n - 1);

    print(v, n);
}