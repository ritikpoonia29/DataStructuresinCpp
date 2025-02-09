#include<bits/stdc++.h>
using namespace std;

bool Balanced_Paren(string s)
{
    stack<char> st;
    // bool res;

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if(st.empty())
            {
                return false;
            }
        else if(s[i] == ')')
        {
            if(st.top() == '(')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if(s[i] == '}')
        {
            if(st.top() == '{')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        else if(s[i] == ']')
        {
            if(st.top() == '[')
            {
                st.pop();
            }
            else
            {
                return false;
            }
        }
        }
    }
    return st.empty();;
}
int main()
{
    string s;
    cin>>s;

    if(Balanced_Paren(s))
    {
        cout<<"The parethesis are balanced\n";
    }
    else
    {
        cout<<"The parenthesis are not balanced\n";
    }

}