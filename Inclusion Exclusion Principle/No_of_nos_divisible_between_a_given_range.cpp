#include<iostream>
using namespace std;

int divisors(int n, int a , int b)
{
    int count = n/a;
    int temp = n/b;
    int flag = n/(a*b);

    int total = count + temp - flag;

    return total;
}
int main()
{
    int n, a, b;

    cin>>n>>a>>b;

    // for(int i=n;i>0;i--)
    // {
    //     if((i%a==0) || (i%b==0))
    //     {
    //         count++;
    //     }    
    // }
    // cout<<count<<endl;

    //OR

    cout<<divisors(n, a, b)<<endl;
}