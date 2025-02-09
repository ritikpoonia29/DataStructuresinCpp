/*
Concept: We have to divide the array into 2 and
         find the maximum difference of the sum and minimum difference of the sum of the array.
Dry Run: A: 12 -3 10 0

        sorted array : -3 0 10 12

        max diff = (10-(-3))+(12-0) = 25
        min diff = (0-(-3))+(12-10) = 5
*/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }

    // take data type max diff and min diff as long long bcoz it may happen that the difference
    // may exceed the limit of int.
    long long max_diff = 0;
    long long min_diff = 0;

    // sort the vector
    sort(v.begin(), v.end());

    // to find the max diff sum the difference of the first half elements of the array and the 
    // other half elements of the array.

    // To find the min diff sum the difference of elements at the odd position and elements 
    // at the even position.
    for(int i=0;i<n/2;i++)
    {
        max_diff += (v[i+n/2] - v[i]);
        min_diff += (v[2*i + 1] - v[2*i]);
    }

    cout<<max_diff<<" "<<min_diff<<endl;
}