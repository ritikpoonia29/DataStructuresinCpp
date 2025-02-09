#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k;
    cin>>k;

    sort(a, a+n);

    // int *ptr = lower_bound(a, a+n, k);
    int *ptr = upper_bound(a, a+n, k);
    if(ptr == (a+n))
    {
        cout<<"NOT FOUND"<<endl;
        return 0;
    }

    cout<<(*ptr)<<endl;
}