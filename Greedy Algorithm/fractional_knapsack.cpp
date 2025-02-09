/*
Concept: We have to find the maximum value of items a thief can steal from the given sack if 
it has different items of different values.

Dry Run: 
w = 20
Sack: {{21 7},{24 4},{12 6},{40 5},{30 6}}
sorted sack: {{40 5},{24 4},{30 6},{21 7},{12 6}}
It 1:
ans = 40
w = 20-5 = 15

It 2:
ans = 40+24 = 64
w = 15-4 = 11

It 3:
ans = 64+30 = 94
w = 11-6 = 5

It 4:
Here w < 7
then
rate per kg = 21/7 = 3
w = 5
ans = 94 + (3*5) = 109
w = 0;
break;
*/


#include<bits/stdc++.h>
using namespace std;

// Function to  to sort the vector.
int comparator(pair<int, int> a, pair<int, int> b)
{
    // Find the rate per kg of the sacks.
    double v1 = (double)a.first/a.second;
    double v2 = (double)b.first/b.second;

    return v1>v2;
}
int result(vector<pair<int, int>> v, int n, int w)
{
    // Sort the vector in descending order on the basis of the rate per kg.
    sort(v.begin(), v.end(), comparator);


    int ans = 0;
    for(int i=0;i<n;i++)
    {
        // If the value of w is greater than the value of the particular item of the sack then
        // add that value to the ans and subtract the quantity from the w and keep doing it until
        // w becomes less than the total value of a particular item. 
        if(w>=v[i].second)
        {
            ans += v[i].first;
            w-=v[i].second;
            continue;
        }

        // Now if w is not equal to zero then fill remaining of it with the next item.
        // For doing so first find the rate per kg of that item and then multiply it with the 
        // remaining value of w and add it to the ans and break the loop.
        double vw = (double)v[i].first/v[i].second;
        ans+= vw*w;
        break;
    }
    // return the answer.
    return ans;
}

int main()
{
    int n;
    cin>>n;

    int w;
    cin>>w;

    vector<pair<int, int>> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i].first>>v[i].second;
    }

    cout<<result(v, n, w)<<endl;
}