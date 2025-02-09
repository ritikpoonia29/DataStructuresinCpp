// Link: https://leetcode.com/problems/climbing-stairs/description/

#include<bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> &dp)
{
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        return 0;
    }

    if(dp[n] != -1)
    {
        return dp[n];
    }

    return dp[n] = solution(n-1, dp) + solution(n-2, dp);
}
int main()
{
    int n;
    cin>>n;

    vector<int> dp(n+1, -1);

    cout<<solution(n, dp)<<endl;
}