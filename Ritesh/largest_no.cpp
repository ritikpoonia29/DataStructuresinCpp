#include <bits/stdc++.h>
using namespace std;

struct
{
    bool operator()(int a, int b) const
    {
        string value1 = to_string(a) + to_string(b);
        string value2 = to_string(b) + to_string(a);

        return value1 > value2;
    }
} customCompare;

string findLargestNumber(vector<int> &numbers)
{
    sort(numbers.begin(), numbers.end(), customCompare);

    string s;
    for (int &i : numbers)
    {
        s += to_string(i);
    }
    return s;
}

int main()
{
    int n;
    cin >> n;
    vector<int> numbers(n);

    for (int i = 0; i < n; i++)
    {
        cin >> numbers[i];
    }

    cout << findLargestNumber(numbers) << endl;
}