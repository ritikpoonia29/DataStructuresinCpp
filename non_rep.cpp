#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;

    for(int i=0;i<s.length();i++)
    {
        mp1[s[i]] = i;
        mp2[s[i]]++;
    }

    for(auto it: mp2)
    {
        if(it.second==1)
        {
            cout<<mp1[it.first]+1<<endl;
        }
    }
}