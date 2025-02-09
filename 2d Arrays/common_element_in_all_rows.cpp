#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    vector<vector<int>> v(n, vector<int>(m));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> v[i][j];
        }
    }

    unordered_map<int, int> mp;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0)
            {
                mp[v[0][j]] = 1;
                if (v.size() == 1)
                {
                    cout << v[i][j] << " ";
                }
            }

            if (i > 0 && mp[v[i][j]] == i)
            {
                mp[v[i][j]] = i + 1;

                if (i == v.size() - 1)
                {
                    cout << v[i][j] << " ";
                }
            }
        }
    }
}