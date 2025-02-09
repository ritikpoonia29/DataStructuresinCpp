// Link: https://leetcode.com/problems/n-th-tribonacci-number/description/

#include<bits/stdc++.h>
using namespace std;

int solution(int n, vector<int> &dp)
{
    if(n==0)
    {
        return 0;
    }

    if(n==1 || n==2)
    {
        return 1;
    }

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;

    for(int i=3;i<n+1;i++)
    {
        dp[i] = (dp[i-1]+dp[i-2]+dp[i-3]);
    }
    return dp[n];
}
int main()
{
    int n;
    cin>>n;

    vector<int> dp(n+1, -1);

    cout<<solution(n, dp)<<endl;
}