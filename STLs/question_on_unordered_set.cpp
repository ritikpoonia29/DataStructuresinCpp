// Q. Given N strings and Q queries. Check whether the given string in the queries are present in the given set of strings.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<string> s;
    int n;
    cout<<"Enter the number of strings in the given set of strings\n";
    cin>>n;

    cout<<"Enter the strings\n";
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.insert(x);
    }

    int q;
    cout<<"Enter the number of queries\n";
    cin>>q;

    while(q--)
    {
        cout<<"Enter the string\n";
        string p;
        cin>>p;

        if(s.find(p) == s.end())
        {
            cout<<"NOT PRESENT\n";
        }
        else
        {
            cout<<"PRESENT\n";
        }
    }
}