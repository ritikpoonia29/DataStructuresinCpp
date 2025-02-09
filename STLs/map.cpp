#include<bits/stdc++.h>
using namespace std;

void printt(multimap<int, string> &m)
{
    
    // map<int, string> :: iterator it;
    cout<<m.size()<<endl;

    // for(it = m.begin(); it!=m.end(); it++)
    // {
    //     cout<<it->first<<" "<<it->second<<endl;
    // }

    for( auto it = m.begin(); it!=m.end();it++)
    {
        cout<<it->first<<" "<<it->second<<endl;
    }
}
int main()
{
    multimap<int, string> m;
    // m[1] = "abc";
    // m[3] = "def";
    // m[2] = "ghi"; // Time complexity of creating a space in map is O(logN).

    m.insert(make_pair(1,"abc"));
    m.insert(make_pair(2, "rit"));
    m.insert(make_pair(1,"abc"));

    m.insert(make_pair(4, "jkl"));

    // Map takes only unique values as input.

    // m[4] = "mno";


    printt(m);
}