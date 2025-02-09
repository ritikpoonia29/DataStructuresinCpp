#include <bits/stdc++.h>
using namespace std;

int func(vector<int> &v, int low, int high)
{
    int pivot = v[low];
    int i = low;
    int j = high;
    

    while(i<j)
    {
        while(v[i] <= pivot && i<=high)
        {
            i++;
        }

        while(v[j] > pivot && j>=low)
        {
            j--;
        }

        if(i<j)
        {
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    int temp = v[j];
    v[j] = v[low];
    v[low] = temp;
    return j;
}
void quicksort(vector<int> &v, int low, int high)
{
    if(low<high)
    {
        int pivot = func(v, low, high);
        quicksort(v, low, pivot-1);
        quicksort(v, pivot+1, high);
    }
}


int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    quicksort(v, 0, n - 1);

    for (auto it : v)
    {
        cout << it << " ";
    }
}