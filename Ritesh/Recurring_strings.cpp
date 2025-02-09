#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<string> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    string s2;
    cin>>s2;

    int count = 0;
    for(int i=0;i<n;i++)
    {
        string s;
        s = v[i];
        int temp = 0;
        for(int j=0;j<s.size();j++)
        {
            if(s2[j] == s[j])
            {
                temp++;
            }
        }
        if(temp == s2.size() - 1 || temp == s2.size())
        {
            count++;
        }
    }
    cout<<count<<endl;
}