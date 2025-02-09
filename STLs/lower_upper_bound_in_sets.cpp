#include<bits/stdc++.h>
#include<chrono>
using namespace std;
using namespace std :: chrono;

int main()
{

    auto start = high_resolution_clock::now();
    set<int> s;

    for(int i=0;i<(int)(1e6);i++)
    {
        s.insert(rand());
    }

    auto it = s.lower_bound(rand());
    auto stop = high_resolution_clock::now();

    auto duration = duration_cast<microseconds>(stop-start);
    cout<<duration.count()<<endl;
}