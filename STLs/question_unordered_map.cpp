// Given N string and Q queries. Print the freqeuncy of each string given in the queries
#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_map<string, int> m;
    int n;
    cin>>n;
    string s;

    for(int i=0;i<n;i++)
    {
        
        cin>>s;
        m[s]++;
    }

    int q;
    cin>>q;

    while(q--)
    {
        string p;
        cin>>p;
        cout<<p<<" "<<m[p]<<endl;
    }
}