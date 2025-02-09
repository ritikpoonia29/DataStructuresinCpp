/*
Concept: We have to find the minimum number of jumps required to reach the end of the array.
Dry Run :
Arr : 1 3 5 8 9 2 6 7 6 8 9
count = 0;
m = 0;
curr = 0;

It 1:
m = max(0,1) = 1;
Since(curr = 0 && i = 0)
{
    count = 1;
    curr = m = 1;
}

It 2:
m = max(1, 1+3) = 4;
since(curr = 1 && i = 1)
{
    count = 1+1 = 2;
    curr = m = 4;
}

It 3:
m = max(4, 2+5) = 7
since(curr = 4 && i = 2)
{
    continue;
}
It 4: m = max(7, 3+8) = 11
since(curr = 4 && i = 3)
{
    continue;
}
It 5:
m = max(11, 4+9) = 13
since(curr = 4 && i = 4)
{
    count = 2+1 = 3;
    curr = m = 13
}
It 6:
m = max(13, 5+2) = 13
since(curr = 13 && curr > n)
{
    break the loop;
}
*/

#include<bits/stdc++.h>
using namespace std;

int minjumps(vector<int> v, int n)
{
    int curr = 0;   // curr stores the current position of the iterator.
    int count = 0;  // count stores the number of jumps taken.
    int maxReach = 0;   // maxReach stores the max length of jump can be made.

    for(int i=0;i<n;i++)
    {
        maxReach = max(maxReach, i+v[i]);   // maxReach is the max of maxReach and the index at which we will reach by jumping from the current index.
        // if curr is equal to i then increase the count by 1 and assign the value of maxReach to curr.
        if(curr == i)
        {
            count++;
            curr = maxReach;
        }
        // if at any point of time maxReach is greater than n then break the loop bcoz it can never be able to any index of the array.
        if(curr > n)
        {
            break;
        }

        // if at any point of time the index surpasses the maxReach value then we can never reach the end of that array so return -1 for it.
        if(i > maxReach)
        {
            return -1;
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    cout<<minjumps(v, n)<<endl;
}