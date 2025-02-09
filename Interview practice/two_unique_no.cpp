#include<bits/stdc++.h>
using namespace std;

int checkbit(int n, int i)
{
    return((n&(1<<i)) != 0);
}
int main()
{
    int v[8] = {1,2,5,7,3,1,2,3};
    int xorsum = 0;
    for(int i=0;i<8;i++)
    {
        xorsum = xorsum^v[i];
    }

    int tempxor = xorsum;
    int setbit = 0;
    int pos = 0;
    while(setbit != 1)
    {
        setbit = xorsum&1;
        pos++;
        xorsum = xorsum>>1;
    }
    int newxor = 0;
    for(int i=0;i<8;i++)
    {
        if(checkbit(v[i], pos-1))
        {
            newxor = newxor^v[i];
        }
    }

    cout<<newxor<<" "<<(newxor^tempxor)<<endl;
}