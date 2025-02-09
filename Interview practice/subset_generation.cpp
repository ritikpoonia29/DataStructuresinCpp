#include<bits/stdc++.h>
using namespace std;

void subset(int v[], int n)
{
    for(int i=0;i<(1<<n);i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i&(1<<j))
            {
                cout<<v[j]<<" ";
            }
        }cout<<endl;
    }
}
int main()
{
    int v[4]= {1,2,3,4};

    subset(v, 4);
}