#include<bits/stdc++.h>
using namespace std;

int npower(int n, int p)
{
    if(p==0)
    {
        return 1;
    }
    else{
        int prevpower = pow(n, p-1);
        return n*prevpower;
    }
} 

int main()
{
    int n, p;
    cin>>n>>p;

    cout<<npower(n,p)<<endl;
}