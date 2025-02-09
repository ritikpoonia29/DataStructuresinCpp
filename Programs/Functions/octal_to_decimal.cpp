#include<iostream>
using namespace std;

int octaltodecimal(int n)
{
    int x=1, y;
    int ans=0;

    while(n>0)
    {
        y = n%10;
        ans = ans + x*y;
        x = x*8;
        n = n/10; 
    }

    return ans;
}

int main()
{
    int n;
    cin>>n;

    cout<<octaltodecimal(n)<<endl;
}