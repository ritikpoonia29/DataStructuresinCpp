#include<bits/stdc++.h>
using namespace std;

void print(set<string> &s)
{
    for(auto it = s.begin(); it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
}

void eraase(set<string> &s)
{
    auto it = s.find("def");
    if(it!=s.end())
    {
        s.erase("def");
    }
}
bool findd(set<string> &s)
{
    auto it = s.find("abc");
    if(it!=s.end())
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    set<string> s;
    int n;
    cout<<"Enter the size of the set\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.insert(x);
    }

    if(findd(s))
    {
        cout<<"PRESENT\n";
    }
    else
    {
        cout<<"NOT PRESENT\n";
    }

    eraase(s);
    print(s);

}