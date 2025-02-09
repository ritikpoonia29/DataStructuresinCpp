#include<bits/stdc++.h>
using namespace std;

int main()
{
    int v[9] = {1,2,3,4,5,4,3,2,1};
    int xorsum = v[0];

    for(int i=1;i<9;i++)
    {
        xorsum^=v[i];
    }

    cout<<xorsum<<endl;
}