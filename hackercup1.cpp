#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int v[n];

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    bool result = true;
    int i = 0;
    while(i<(n-1))
    {
        if(v[i] <= v[i+1])
        {
            break;
        }
        i++;
    }

    if(i == n-1)
    {
        result = false;
    }
    else
    {
        while(i<(n-1))
        {
            if(v[i] >= v[i+1])
            {
                result = false;
                break;
            }
            i++;
        }
    }

    if(!result)
    {
        cout<<"false\n";
    }
    else
    {
        cout<<"true\n";
    }
}
