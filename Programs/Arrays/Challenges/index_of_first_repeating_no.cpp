#include<iostream>
#include<stdlib.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

  const int N = 1e6+2;

  int idx[N];

  for(int i=0;i<N;i++)
  {
      idx[i] = -1;
  }

  int minidx = 99999;

  for(int i=1;i<=n;i++)
  {
      if(idx[a[i]] != -1)
      {
          minidx = min(minidx, idx[a[i]]);
      }
      else
      {
          idx[a[i]] = i;
      }
  }

  if(minidx == 99999)
  {
      cout<<-1<<endl;
  }
  else
  {
      cout<<minidx+1<<endl;
  }
}