#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;

    cin>>s;

    string ans = "";

    int i = 0;
    int j = s.length()-1;

    while(i<j)
    {
        if(s[i] == s[j])
        {
            i++;
            j--;
        }
        else
        {
            ans+=s[i];
            i++;
        }
    }

    reverse(ans.begin(), ans.end());

    cout<<ans<<endl;
    
}