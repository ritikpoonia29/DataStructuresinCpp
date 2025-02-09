#include<bits/stdc++.h>
using namespace std;

void print(unordered_set<string> &s)
{
    cout<<"Your string in order is: \n";
    for(auto it = s.begin(); it!=s.end();it++)
    {
        cout<<*it<<endl;
    }
}

// void eraase(unordered_set<string> &s)
// {
//     auto it = s.find("ashmit");
//     if(it!=s.end())
//     {
//         s.erase("ashmit");
//     }
// }
bool findd(unordered_set<string> &s)
{
    auto it = s.find("abc");
    if(it!=s.end())
    {
        return true;
    }
    else{
        return false;
    }
}
int main()
{
    unordered_set<string> s;
    int n;
    cout<<"Enter the size of the unordered_set\n";
    cin>>n;

    for(int i=0;i<n;i++)
    {
        string x;
        cin>>x;
        s.insert(x);
    }

    // if(findd(s))
    // {
    //     cout<<"PRESENT\n";
    // }
    // else
    // {
    //     cout<<"NOT PRESENT\n";
    // }

    // Values can't be repeated in a ordered set.
    // Values can be repeated in a unordered set but will be printed in the format of ordered set.

    eraase(s);
    print(s);

}