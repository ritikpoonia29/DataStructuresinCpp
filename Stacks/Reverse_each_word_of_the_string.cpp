#include<bits/stdc++.h>
using namespace std;

string reverse(string s)
{
    stack<char> st;
    string res = "";

    for(int i=0;i<s.length();i++)
    {
        if(s[i]!='.')
        {
            st.push(s[i]);
        }

        else
        {
            while(!st.empty())
            {
                res+=st.top();
                st.pop();
            }
            res+='.';
        }
    }

    while(!st.empty())
    {
        res+=st.top();
        st.pop();
    }
    return res;
}
int main()
{
    string s;
    cin>>s;

    string ans = reverse(s);

    for(int i=0;i<ans.length();i++)
    {
        cout<<ans[i];
    }
    cout<<endl;
}