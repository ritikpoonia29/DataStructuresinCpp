#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;

    int a[26]; // In english we have 26 alphabets.
    for(int i=0;i<26;i++)
    {
        a[i] = 0;
    }
    for(int i=0;i<s.length();i++)
    {
        a[s[i] - 'a']++;
    }

    char ans;
    int maxfreq = -1;

    for(int i=0;i<26;i++)
    {
        if(maxfreq<a[i])
        {
            maxfreq = a[i];
            ans = 'a'+i;
        }
    }

    cout<<maxfreq<<endl;
    cout<<ans<<endl;
}