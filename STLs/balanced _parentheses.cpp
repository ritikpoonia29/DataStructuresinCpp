#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> m = {{'[', -1}, {'{', -2}, {'(', -3}, {']', 1}, {'}', 2}, {')', 3}};
string isbalanced(string st)
{
    stack<char> s;

    for(char it: st)
    {
        if(m[it] < 0)
        {
            s.push(it);
        }
        else
        {
            if(s.empty())
            {
                return "NO";
            }

            char top = s.top();
            s.pop();

            if(m[it] + m[top] != 0)
            {
                return "NO";
            }
        }
    }


    if(s.empty())
    {
        return "YES";
    }
   
   return "NO";
}
int main()
{
    int t;
    cin>>t;

    while(t--)
    {
        string st;
        cin>>st;
        cout<<isbalanced(st)<<endl;;
    }
}