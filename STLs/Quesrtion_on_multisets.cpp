#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        int n, k;
        cin>>n>>k;

        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int sum = 0;
        int count = 0;

        while(count != k)
        {
            int i = 0;
            sort(a, a+n, greater<int>());
            sum+=a[0];
            a[0] = a[0]/2;
            count++; 
        }
        cout<<sum<<endl;
    }
}