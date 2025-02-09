#include <bits/stdc++.h>
using namespace std;

static bool comparator(pair<int, int> a, pair<int, int> b);

int totalTime(int n, int arr[], int end[])
{
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(make_pair(arr[i], end[i]));
    }

    sort(v.begin(), v.end(), comparator);

    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i].second;
    }
    return sum;
}

static bool comparator(pair<int, int> a, pair<int, int> b)
{
    if (a.second != b.second)
        return a.first < b.first;
}


int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int end[n];
    for (int i = 0; i < n; i++)
    {
        cin >> end[i];
    }

    cout<<totalTime(n, arr, end)<<endl;
}