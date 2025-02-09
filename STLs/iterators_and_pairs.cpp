#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;
    // vector<pair<int, int>> v = {{1,2}, {2,3}, {3,4}, {4,5}, {5,6}};

    vector<pair<int, int>> v;

    for(int i=0;i<n;i++)
    {
        int x, y;
        cin>>x>>y;

        v.push_back(make_pair(x, y));
    }
    // vector<pair<int, int>> :: iterator it = v.begin();

    // for(it = v.begin();it!=v.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    // OR

    for(auto it = v.begin(); it!=v.end(); it++)    // "auto" keyword automatically understands the datatype from the given value.
    cout<<it->first<<" "<<it->second<<endl;




}