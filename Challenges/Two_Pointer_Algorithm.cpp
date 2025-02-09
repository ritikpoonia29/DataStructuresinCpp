/*
Concept: We have to find 3 number from the array such that their sum is equal to the target given in a time complexity of O(n2).

Approach:
    sort the array.
    take a variable name temp:
    temp = target - a[i];
    take two pointers j and k
    j = i+1 and k = array.size() - 1;
    if(a[j]+a[k] == temp)
    {
        return the values of a[i], a[j], a[k] and return;
    }
    else if(a[j] + a[k] < temp)
    {
        j++;
    }
    else if(a[j] + a[k] > temp)
    {
        k--;
    }

    Dry Run:
    Array : 6 8 3 9 7
    Target : 19

    Sorted array: 3 6 7 8 9
    i = 0;
    j = 1;
    k = 4;
    temp = target - a[i];
    temp = 19 - 3 = 16
    I1: 6 + 9 = 15 (i.e. < temp)
    j++;
    I2: 7 + 9 = 16(i.e. = temp)
    return a[i], a[j], a[k];
*/
#include<bits/stdc++.h>
using namespace std;

void twoPointer(vector<int> a, int target)
{
    sort(a.begin(), a.end());
    int temp;
    int j,k;
    for(int i=0;i<a.size();i++)
    {
        temp = target - a[i];
         j = i+1;
         k = a.size() - 1;

        while(j<k)
        {
            if(a[j] + a[k] == temp)
            {
                cout<<a[i]<<" "<<a[j]<<" "<<a[k]<<endl;
                return;
            }
            else if((a[j] + a[k]) < temp)
            {
                j++;
            }
            else if((a[j] + a[k]) > temp)
            {
                k--;
            }
        }
    }
}

int main()
{
    vector<int> a;

    int n, target;
    cin>>n>>target;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        a.push_back(x);
    }

    twoPointer(a, target);
}