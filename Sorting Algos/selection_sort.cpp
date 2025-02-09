#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

vector<int> selection(vector<int> arr, int n)
{
    int val;

    for(int i=0;i<n-1;i++)
    {
        val = i;
        for(int j=i+1;j<n;j++)
        {
            if(arr[val] > arr[j])
            {
                val = j;
            }
        }
        swap(&arr[i], &arr[val]);
    }

    return arr;
}
int main()
{
    int n;
    cin>>n;

    vector<int> arr(n);

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    

    vector<int> temp = selection(arr, n);

    for(int i=0;i<n;i++)
    {
        cout<<temp[i] <<" ";
    }

}