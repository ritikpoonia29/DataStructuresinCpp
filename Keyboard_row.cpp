#include<bits/stdc++.h>
using namespace std;

void solution(vector<string> v)
{
   int n = v.size();

   set<char> st1 = {'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'};
   set<char> st2 = {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l'};
   set<char> st3 = {'z', 'x', 'c', 'v', 'b', 'n', 'm'};

   vector<string> ans;
   for(int i=0;i<v.size();i++)
   { int count = 0;
      if(st1.find(tolower(v[i][0])) != st1.end())
      {
         count = 1;
      }
      else if(st2.find(tolower(v[i][0])) != st2.end())
      {
         count = 2;
      }
      else
      {
         count = 3;
      }

      if(count == 1)
      {
         bool flag = true;
         for(int j=1;j<v[i].length();j++)
         {
            if(st1.find(tolower(v[i][j])) == st1.end())
            {
               flag = false;
               break;
            }
         }
         if(flag == true)
         {
            ans.push_back(v[i]);
         }
      }
      else if(count == 2)
      {
         bool flag = true;
         for(int j=1;j<v[i].length();j++)
         {
            if(st2.find(tolower(v[i][j])) == st2.end())
            {
               flag = false;
               break;
            }
         }
         if(flag == true)
         {
            ans.push_back(v[i]);
         }
      }
      else if(count == 3)
      {
         bool flag = true;
         for(int j=1;j<v[i].length();j++)
         {
            if(st3.find(tolower(v[i][j])) == st3.end())
            {
               flag = false;
               break;
            }
         }
         if(flag == true)
         {
            ans.push_back(v[i]);
         }
      }
   }

   for(auto it: ans)
   {
      cout<<it<<" ";
   }
   
}
int main()
{
   int n;
   cin>>n;

   vector<string> v;

   for(int i=0;i<n;i++)
   {
      string x;
      cin>>x;
      v.push_back(x);
   }

   solution(v);
}