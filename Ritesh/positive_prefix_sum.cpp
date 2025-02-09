#include<bits/stdc++.h>
using namespace std;

int prefixsum(vector<int> v, int n)
{
    sort(v.begin(), v.end(), greater<int>());
    vector<int> res;

    int sum = 0;
    for(int i=0;i<n;i++)
    {
        sum+=v[i];
        res.push_back(sum);
    }

    int count = 0;

    for(int i=0;i<res.size();i++)
    {
        if(res[i] >= 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{
        int n;
        cin>>n;

        vector<int> v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }

        cout<<prefixsum(v, n)<<endl;
}