#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> mp;

    // mp[0] = 101;
    // mp[1] = 102;

    // for(int i=0;i<mp.size();i++)
    // {
    //     cout<<mp[i]<<endl;
    // }

    mp.insert(make_pair(1, 101));
    mp.insert(make_pair(2, 102));

    for(auto i: mp)
    {
        cout<<i.first<<" "<<i.second<<endl;
    }

}