#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<pair<string, string>, vector<int>> m;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string x, y;
        int k;
        cin>>x>>y>>k;
        for(int j = 0;j<k;j++)
        {
            int p;
            cin>>p;
            m[{x, y}].push_back(p);
        }
    }

    for(auto pr: m)
    {
        auto &full_name = pr.first;
        auto &list = pr.second;
        cout<<full_name.first<<" "<<full_name.second<<endl;
        cout<<list.size()<<endl;
        for(auto &element: list)
        {
            cout<<element<<" ";
        }cout<<endl;
    }
}