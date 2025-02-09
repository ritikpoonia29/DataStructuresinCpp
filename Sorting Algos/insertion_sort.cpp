#include<bits/stdc++.h>
using namespace std;

vector<int> sorting(vector<int> arr, int n)
{
    for(int i=1;i<n;i++)
    {
        int key = arr[i];
        int j = i-1;

        while(j>=0 && (arr[j] > key))
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
    return arr;
}
int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    vector<int> temp = sorting(v, n);
    for(auto it: temp)
    {
        cout<<it<<" ";
    }
}