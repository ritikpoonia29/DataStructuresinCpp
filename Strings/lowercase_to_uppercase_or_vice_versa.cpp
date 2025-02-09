#include<bits/stdc++.h>
using namespace std;

int main()
{
   string str;
   cin>>str;

   for(int i=0;i<str.length();i++)
   {
    //    if(str[i]>='a' && str[i]<='z')
    //    {
    //        str[i] -= 32;
    //    }

    //OR

    // if(str[i]>= 'A' && str[i]<='Z')
    // {
    //     str[i] += 32;
    // }

    // OR


       
   }

   // transform(str.begin(), str.end(), str.begin(), ::toupper);
    transform(str.begin(), str.end(), str.begin(), ::tolower);
   cout<<str<<endl;
}