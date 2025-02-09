#include<bits/stdc++.h>
using namespace std;

int getbit(int n, int i)
{
    return ((n&(1<<i))!=0);
}
int setbit(int n, int i)
{
    return(n|(1<<i));
}
int main()
{
    int arr[7] = {1,2,2,4,1,2,1};
    int result = 0;
    
    for(int i=0;i<64;i++)
    {
        int sum = 0;
        for(int j=0;j<7;j++)
        {
            if(getbit(arr[j], i))
            {
                sum++;
            }
        }
        if(sum%3 != 0)
        {
            result = setbit(result, i);
        }
    }
    cout<<result<<endl;
}