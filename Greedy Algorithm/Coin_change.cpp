/*
Concept: We have to find the minimum number of indian currencies required to equal to the value x.
Approach: Sort the vector of currencies in descending order. 
          If the value of x ios greater than the currency value the subtract it from the x and update x and increase the counter by 1.
          else Iterate to the next currency value.
Dry Run:
    Currencies Vector: 2000 500 200 100 50 20 10 5 2 1
    x = 273

    It 1:
    x = 273-200 = 73
    count = 1;

    It 2:
    x = 73-50 = 23
    Count = 2;

    It 3:
    x = 23-20 = 3
    count = 3;

    It 4:
    x = 3-2 = 1
    count = 4;

    It 5: 1-1 = 0
    count  = 5;
*/
#include<bits/stdc++.h>
using namespace std;

int coinchange(vector<int> v, int n, int x)
{
    int count = 0;
    sort(v.begin(), v.end(), greater<int>());
    int i = 0;
    while(x!=0)
    {
        if(x >= v[i])
        {
            x = x-v[i];
            count++;
        }
        else{
            i++;
        }
    }
    return count;
}

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    int x;
    cin>>x;

    cout<<coinchange(v, n, x)<<endl;
}