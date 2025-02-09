// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin>>n>>m;
    
    int k = 1;
    vector<int> v(m, 0);
    int i = 0;
    while(n!=0)
    {
        if(i>m-1)
        {
            i = 0;
        }
        
        if(k>n)
        {
            k = n;
        }
        v[i] = v[i]+k;
		n = n-k;
        k++;
        i++;
    }
    
    for(auto it: v)
    {
        cout<<it<<" ";
    }
}