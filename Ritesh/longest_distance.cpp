#include<bits/stdc++.h>
using namespace std;

int calculatedis(int a, int b, int x, int y)
{
    int t = (x-a)*(x-a);
    int r = (y-b)*(y-b);
    int sol = t+r;
    return sqrt(sol);
}
int main()
{
    int n;
    cin>>n;

    vector<pair<pair<int, int>, int>> v(n);
    vector<pair<pair<int, int>, int>> blook; 
    vector<pair<pair<int, int>, int>> clook;
    
    for(int i=0;i<n;i++)
    {
        cin>>v[i].first.first>>v[i].first.second>>v[i].second;
    }
    

    vector<int> distance;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(v[i].second == 0 && v[j].second == 1)
            {
                int dis = calculatedis(v[i].first.first, v[i].first.second, v[j].first.first, v[j].first.second);
                distance.push_back(dis);
            }
        }
    }

    sort(distance.begin(), distance.end(), greater<int>());

    cout<<distance[0]<<endl;
}