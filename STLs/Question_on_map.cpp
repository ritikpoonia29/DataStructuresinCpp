// Print the unique strings in lexographic order and also print their frequency.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<string, int> m;
    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;

        m[s]++;
    }

    // for(auto it = m.begin(); it!=m.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    for(auto pr: m)
    {
        cout<<pr.first<<" "<<pr.second<<endl;
    }
}