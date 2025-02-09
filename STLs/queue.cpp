#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;

    int n;
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        q.push(x);
    }

    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }
}