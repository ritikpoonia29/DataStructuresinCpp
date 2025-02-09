#include<bits/stdc++.h>
using namespace std;

void printt(vector<int> v);

int main()
{
    vector<int> v;

    int n;
    cout<<"Enter the size of the vector\n";
    cin>>n;
    int x;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        v.push_back(x);
    }

    v.push_back(6);
    v.pop_back();

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
}

// void printt(vector<int> v)
// {
//     cout<<v.size()<<endl;
    
//     cout<<endl;
// }