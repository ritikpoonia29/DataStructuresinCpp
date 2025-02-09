/*
    Mat: 1 2 3
         4 5 6
         7 8 9

    Rotated by 90': 7 4 1
                    8 5 2
                    9 6 3

*/

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

    int j = 0;

    while(j<m)
    {
        for(int i=n-1;i>=0;i--)
        {
            cout<<v[i][j]<<" ";
        }cout<<endl;
        j++;
    }
}
