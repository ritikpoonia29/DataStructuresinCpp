#include<bits/stdc++.h>
using namespace std;


// void printt(map<int, string> &m)
// {
//     for(auto it = m.begin(); it!=m.end();it++)
//     {
//         cout<<it->first<<" "<<it->second<<endl;
//     }
// }
int main()
{
    map<int, string> m;
    int n;
    cout<<"Enter the size of the map\n"<<endl;

    cin>>n;

    for(int i=0;i<n;i++)
    {
        int x;
        string y;
        cin>>x;
        cin>>y;

        m.insert(make_pair(x, y));
    }

    // auto it = m.find(4);
    // auto it = m.find(7);
    auto it = m.find(3);

    if(it == m.end())
    {
        cout<<"No value\n";
    }
    else
    {
        cout<<(*it).first<<" "<<(*it).second<<endl;
    }

    // printt(m);
}