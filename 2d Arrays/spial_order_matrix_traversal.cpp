#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin>>n>>m;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    int rowstart = 0;
    int rowend = n-1;
    int colstart = 0;
    int colend = m-1;

    while(rowstart<=rowend && colstart <= colend)
    {
        for(int i=colstart;i<=colend ; i++)
        {
            cout<<arr[rowstart][i]<<" ";
        }
        rowstart++;
        for(int i=rowstart;i<=rowend;i++)
        {
            cout<<arr[i][colend]<<" ";
        }
        colend--;
        for(int i=colend;i>=colstart;i--)
        {
            cout<<arr[rowend][i]<<" ";
        }
        rowend--;
        for(int i=rowend;i>=rowstart;i--)
        {
            cout<<arr[i][colstart]<<" ";
        }
        colstart++;
    }
}



