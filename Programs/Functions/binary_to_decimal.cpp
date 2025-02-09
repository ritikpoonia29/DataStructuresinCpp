#include<iostream>
using namespace std;

int binarytodecimal(int n)
{
    int x,y;
    x=1;
    int ans=0;

    while(n>0)
    {
        y = n%10;
        ans = ans + x*y;
        x = x*2;
        n = n/10;
    }

    return ans;
}
int main()
{
    int n;
    cin>>n;

    cout<<binarytodecimal(n)<<endl;
}