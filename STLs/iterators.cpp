#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of vector\n";
    cin>>n;
    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        v.push_back(x);
    }

    // vector<int> ::iterator it = v.begin();

    // for(it = v.begin(); it!=v.end(); it++)
    // {
    //     cout<<(*it)<<endl;
    // }

    //OR

    for(auto it = v.begin();it!=v.end();it++)
    {
        cout<<*it<<endl;
    }
    
}