/*
Concept: We have to find the number of meetings that can happen in a single room given that only
         one meeting can take place at a time.

Dry Run: start: 1 3 0 5 8 5
         end: 2 4 6 7 9 9

    v:{{{1 2}, 1},{{3 4}, 2},{{0 6}, 3},{{5 7}, 4},{{8 9}, 5},{{5 9}, 6}}
    limit = 2
    count = 1;

    It 1:
    since(3 > limit)
    {
        count = 1+1 = 2;
        limit = 4;
    }

    It 2:
    since(0 < limit)
    {
        continue;
    }

    It 3:
    since(5 > limit)
    {
        count = 2+1 = 3;
        limit = 7;
    }

    It 4:
    since(8 > limit)
    {
        count = 3+1 = 4;
        limit = 9;
    }

    It 5:
    since(5 < limit)
    {
        continue;
    }
*/
#include<bits/stdc++.h>
using namespace std;

// function to sort the vector.
static bool comparator(pair<pair<int, int>, int> p1, pair<pair<int, int>, int> p2)
{
    if(p1.first.second != p2.first.second)
    {
        return p1.first.second < p2.first.second;
    }
    // if end times of two meetings is equal then return whose index is smaller.
    return p1.second<p2.second;
}

// function to find the max meetings that can be arranged.
int maxmeetings(vector<int> start, vector<int> end, int n)
{
    vector<pair<pair<int, int>, int>> v;

    for(int i=0;i<n;i++)
    {
        // store the start time, end time and index of the meeting.
        v.push_back(make_pair(make_pair(start[i], end[i]), i+1));
    }

    sort(v.begin(), v.end(), comparator);

    // set the end time of the first meeting as limit and iterate on the remaining.
    int limit = v[0].first.second;
    int count = 1;

    for(int i=1;i<n;i++)
    {
        // if the start time of a meeting is greater than the limit then update the limit to the end time
        // of that meeting and increase the count by 1.
        if(v[i].first.first > limit)
        {
            count++;
            limit = v[i].first.second;
        }
    }
    // return the count;
    return count;
}
int main()
{
    int n;
    cin>>n;

    vector<int> start(n);
    vector<int> end(n);

    for(int i=0;i<n;i++)
    {
        cin>>start[i];
    }
    for(int i=0;i<n;i++)
    {
        cin>>end[i];
    }

    cout<<maxmeetings(start,end,n)<<endl;
}