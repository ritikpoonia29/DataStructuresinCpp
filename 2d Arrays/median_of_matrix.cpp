#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    vector<vector<int>> v(n, vector<int>(m));

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>v[i][j];
        }
    }

    vector<int> arr;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            arr.push_back(v[i][j]);
        }
    }

    sort(arr.begin(), arr.end());

    int temp = n*m;
    if(temp %2 == 0)
    {
        cout<<(arr[temp/2] + arr[temp/2-1])/2;
    }
    else
    {
        cout<<arr[temp/2];
    }


    
}