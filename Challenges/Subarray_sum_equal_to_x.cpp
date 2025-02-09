#include<bits/stdc++.h>
using namespace std;

vector<int> subarraysum(int arr[], int n, long long s)
{
  vector<int> ans;

  long long sum = 0;
    int j = 0;
  for(int i = 0;i<n;i++)
  {
    if(sum<s)
    {
        sum+=arr[i];
    }

    if(sum>s)
    {
        while(sum > s)
        {
            sum-=arr[j];
            j++;
        }
    }

    
    if(sum == s)
    {
        ans.push_back(j+1);
        ans.push_back(i+1);
        break;
    }
  }

  if(sum < s)
  {
    ans.push_back(-1);
  }

    return ans;
}
int main()
{
    int n;
    cin>>n;

    long long x;
    cin>>x;

    int arr[n];

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    vector<int> res = subarraysum(arr, n, x);

    for(auto i: res)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}