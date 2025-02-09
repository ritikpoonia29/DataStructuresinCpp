#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, q;
    cin>>n>>m>>q;
    int arr1[n][m];
    int arr2[m][q];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr1[i][j];
        }
    }

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<q;j++)
        {
            cin>>arr2[i][j];
        }
    }

    int ans[n][q];

    for(int i=0;i<n;i++)
        for(int j=0;j<q;j++)
            ans[i][j] = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<q;j++)
        {
            for(int k=0;k<m;k++)
            {  
               ans[i][j]+=(arr1[i][k]*arr2[k][j]); 
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j = 0;j<q;j++)
        {
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
}