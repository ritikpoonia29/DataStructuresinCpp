#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, m, target;
    cin>>n>>m>>target;
    int temp=0;

    int arr[n][m];

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>arr[i][j];
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(arr[i][j]==target)
            {
                temp++;
            }
        }
    }

    if(temp>0)
    {
        cout<<"true"<<endl;
    }
    else
    {
        cout<<"false"<<endl;
    }

        
}