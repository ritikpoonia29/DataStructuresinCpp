#include<bits/stdc++.h>
using namespace std;

int precedence(char s)
{
    if(s == '^')
    {
        return 3;
    }
    else if(s == '/' || s == '*')
    {
        return 2;
    }
    else if(s == '+' || s == '-')
    {
        return 1;
    }
    else
    {
        return -1;
    }
}

string InfixToPrefix(string s)
{
    stack<int> st;
    string res;

    reverse(s.begin(), s.end());

    for(int i=0;i<s.length();i++)
    {
        if(s[i] == ')')
        {
            s[i] = '(';
        }
        else if(s[i] == '(')
        {
            s[i] = ')';
        }
    }
   for(int i=0;i<s.length();i++)
   {
   if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))
   {
        res+=s[i];
   }
   else if(s[i] == '(')
   {
    st.push(s[i]);
   }
   else if(s[i] == ')')
   {
    while(!st.empty() && st.top() != '(')
    {
        res+=st.top();
        st.pop();
    }

    if(!st.empty())
    {
        st.pop();
    }
   }
   else
   {
    while(!st.empty() && precedence(st.top()) > precedence(s[i]))
    {
        res+=st.top();
        st.pop();
    }
    st.push(s[i]);
   }
   }

   while(!st.empty())
    {
    res+=st.top();
    st.pop();
    }

    reverse(res.begin(), res.end());
    return res;
}

int main()
{
    string s = "(a-b/c)*(a/k-l)";
    cout<<InfixToPrefix(s)<<endl;
}

