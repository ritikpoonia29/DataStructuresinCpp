#include<bits/stdc++.h>
using namespace std;

void binary(int n)
{
    vector<int> temp;

    while(n!=0)
    {
        int dig = n%2;
        temp.push_back(dig);
        n = n/2;
    }

    for(int i=temp.size()-1;i>=0;i--)
    {
        cout<<temp[i];
    }
}
int main()
{
    int n;
    cin>>n;

    binary(n);
}