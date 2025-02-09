/*
Concept: We have to select the activities in such a way that they are perfomred in a sequence without wasting much time in between.
Approach: Create a vector v(vector<pair<pair<int, int>, int>>) and store the start time and end time of a activity in the first pair and the index of that activity in the 
          second pair.
          Sort the vector v on the basis of the end of the activities and if the end time is equal then sort them on the basis of their index.
          Create a variable named limit and a vector ans.
          Store the end time of the activity at index 0 in limit and push limit in the ans vector.
          Start iterating in vector and start from index 1 -> n
          If at any index the value of the start time of an activity is greater than the limit
          then update the limit with the end time of that activity and push the index of that activity
          in the answer vector.
          Sort the answer vector and return it.
Dry Run:
Start : 1 3 0 5 8 5
End : 2 4 6 7 9 9
Vector V: {{1,2,1},{3,4,2},{0,6,3},{5,7,4},{8,9,5},{5,9,6}}
Limit: 2
Answer: 1
It 1:
Limit: 4
Answer : 1 2

It 2:
Limit: 4
Answer: 1 2 

It 3:
Limit: 7
Answer: 1 2 4

It 4: 
Limit: 9 
Answer: 1 2 4 5

It 5: 
Limit: 9
Answer: 1 2 4 5
*/
#include<bits/stdc++.h>
using namespace std;

/*struct meet{
    int s;
    int e;
    int pos;
};*/

/*bool comparator(struct meet m1, meet m2)
{
    if(m1.e < m2.e)
    {
        return true;
    }
    else if(m1.e == m2.e)
    {
        if(m1.pos < m2.pos)
        {
            return true;
        }
    }

    return false;
}*/

static bool comparator(pair<pair<int,int>,int> a, pair<pair<int,int>,int> b)
    {
        if(a.first.second!=b.first.second)
        return a.first.second<b.first.second;
        return a.second<b.second;
    }


vector<int> activity(vector<int> start, vector<int> end, int n)
{
    /*struct meet meeting[n];
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        meeting[i].s = start[i];
        meeting[i].e = end[i];
        meeting[i].pos = i+1;
    }

    sort(meeting, meeting+n, comparator);

    int limit = meeting[0].e;
    ans.push_back(meeting[0].pos);
    for(int i=1;i<n;i++)
    {
        if(meeting[i].s > limit)
        {
            limit = meeting[i].e;
            ans.push_back(meeting[i].pos);
        }
    }
    return ans;*/

    // Method 2

    vector<pair<pair<int, int>, int>> v;
    vector<int> ans;

    for(int i=0;i<n;i++)
    {
        v.push_back({{start[i], end[i]}, i+1});
    }

    sort(v.begin(), v.end(), comparator);

    int limit = v[0].first.second;
    ans.push_back(v[0].second);

    for(int i=1;i<n;i++)
    {
        if(v[i].first.first > limit)
        {
            limit = v[i].first.second;
            ans.push_back(v[i].second);
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}


int main()

{
    int n;
    cin>>n;

    vector<int> start(n);
    vector<int> end(n);

    for(int i = 0;i<n;i++)
    {
        cin>>start[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>end[i];
    }

    vector<int> res = activity(start, end, n);

    for(auto i: res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    
}