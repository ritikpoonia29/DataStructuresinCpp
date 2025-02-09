#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    int k;
    cin>>k;

    sort(v.begin(), v.end());
    // auto it = lower_bound(v.begin(), v.end(), k);
    auto it = upper_bound(v.begin(), v.end(), k);

    if(it == v.end())
    {
        cout<<"NOT FOUND\n";
        return 0;
    }

    cout<<(*it)<<endl;
}