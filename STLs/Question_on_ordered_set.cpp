//Q. Given N strings. Print the unique strings in lexographic order.

#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<string> s;
    int n;
    cout<<"Enter the number of strings\n";
    cin>>n;

    cout<<"Enter the strings\n";
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.insert(x);
    }

    cout<<"Unique strings in lexographic order are:\n";
    for(auto value: s)
    {
        cout<<value<<endl;
    }
}
