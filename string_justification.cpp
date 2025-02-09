#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<string> words;
    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;

        words.push_back(x);
    }

    int maxwid;
    cin>>maxwid;

    long long int size = 0;
        for(int i=0;i<words.size();i++)
        {
            for(int j=0;j<words[i].length();j++)
            {
                size++;
            }
        }
        size+=(words.size()-1);

        int temp = size/maxwid;

        cout<<temp<<endl;   
}