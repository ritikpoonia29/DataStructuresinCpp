#include<bits/stdc++.h>
using namespace std;

bool result(string &s1, string &s2)
{
    reverse(s2.begin(), s2.end());

    for(int i=0;i<s1.length();i++)
    {
        if(s1[i] != s2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s1, s2;
    cin>>s1;
    cin>>s2;

    if(result(s1, s2))
    {
        cout<<"Yes\n";
    }
    else
    {
        cout<<"No\n";
    }

}