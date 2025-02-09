#include<bits/stdc++.h>
using namespace std;

int result(vector<int> v, int target)
{
    int n = v.size();
     int l = 0;
    int h = n-1;

    while(l<=h)
    {
        int mid = (l+h)/2;
        if(v[mid] == target)
        {
            return mid;
        }
        if(v[mid] >= v[l])
        {
            if(v[l] <= target && v[mid] >= target)
            {
                h = mid-1;
            }
            else
            {
                l = mid+1;
            }
        }
        else
        {
            if(target >= v[mid] && v[h] <= target)
            {
                l = mid+1;
            }
            else
            {
                h = mid-1;
            }
        }
    }
}
int main()
{
    int n, target;
    cin>>n>>target;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    cout<<result(v, target)<<endl;

   
}