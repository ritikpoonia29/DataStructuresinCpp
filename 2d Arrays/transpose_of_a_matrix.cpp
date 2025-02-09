#include<bits/stdc++.h>
using namespace std;

int main()
{
    int rows, columns;
    cin>>rows>>columns;

    int mat[rows][columns];

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>mat[i][j];
        }
    }

     for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cout<<mat[j][i]<<" ";
        }
        cout<<endl;
    }

}
