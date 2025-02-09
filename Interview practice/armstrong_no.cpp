#include<bits/stdc++.h>
using namespace std;

void armstrong(int n)
{
    vector<int> v;
    int temp = n;
    int count = 0;
    while(temp!=0)
    {
        int dig = temp%10;
        v.push_back(dig);
        temp = temp/10;
        count++;
    }

    int sum = 0;
    for(int i=0;i<v.size();i++)
    {
        sum+=(pow(v[i], count));
    }

    if(sum == n)
    {
        cout<<"YES\n";
    }
    else
    cout<<"NO\n";
}
int main()
{
    int n;
    cin>>n;

    armstrong(n);
}