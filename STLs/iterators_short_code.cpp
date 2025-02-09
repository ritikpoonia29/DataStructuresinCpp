#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {1,2,3,4,5};

    // for( int &value : v) // call by refernce(original)
    // {
    //     value++;     // Increases the values int vector by 1;
    // }

    for(int value: v)
    {
        cout<<value<<endl;
    }

    //OR

    for(auto value: v)
    {
        cout<<value<<endl;
    }

    // vector<pair<int, int>> v = {{1,2},{2,3},{3,4},{4,5},{5,6}};

    // for(pair<int, int> value : v)
    // {
    //     cout<<value.first<<" "<<value.second<<endl;
    // }
}