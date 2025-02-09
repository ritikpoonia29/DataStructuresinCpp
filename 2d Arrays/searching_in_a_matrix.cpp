#include<iostream>
using namespace std;

int main()
{
    int n, m, x, flag;
    cin>>n>>m;

    int a[n][m];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>a[i][j];
        }
    }

cin>>x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==x)
            {
                flag = true;
                cout<<i<<" "<<j<<endl;
                
            }
            
        }
    }
    if(flag)
    {
        cout<<"found"<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    


}