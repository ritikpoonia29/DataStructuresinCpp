#include<bits/stdc++.h>
using namespace std;

int main()
{
    multiset<string> s;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;

        s.insert(x);
    }

    // auto it = s.find("abc");
    // if(it != s.end())
    // {
    //     s.erase(it);
    // }


    for(auto value: s)
    {
        cout<<value<<endl;
    }

// Using multiset we can print the repeated values also but in a sorted manner.
}