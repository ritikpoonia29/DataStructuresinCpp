#include<bits/stdc++.h>
using namespace std;

void printvec(vector<int> &v)
{
    cout<<v.size()<<endl;

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }cout<<endl;
}
int main()
{
    int N;
    cin>>N;

    vector<vector<int>> v;

    for(int i=0;i<N;i++)
    {
        int n;
        cin>>n;

        v.push_back(vector<int> ());
        for(int j=0;j<n;j++)
        {
            int x;
            cin>>x;
            v[i].push_back(x);
        }
    }

    for(int i=0;i<v.size();i++)
    {
        printvec(v[i]);
    }
}