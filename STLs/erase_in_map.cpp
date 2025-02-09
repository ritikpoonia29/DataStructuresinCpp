#include<bits/stdc++.h>
using namespace std;

void printt(map<int, string> &m);

int main()
{
    map<int, string> m;
    int n;
    cout<<"Enter the size of the array\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        string y;
        cin>>x>>y;

        m.insert(make_pair(x,y));
    }

    // auto it = m.find(3);
    m.erase(2);
    m.clear();
    printt(m);
}

void printt(map<int, string> &m)
{
    cout<<m.size()<<endl;
    for(auto it = m.begin(); it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}