#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    int sum = 0;
    int ans = 0;

    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        if(sum < 1)
        {
            sum=-sum;
            ans+=sum;
            sum = 0;
        }
    }

    cout<<ans<<endl;
}