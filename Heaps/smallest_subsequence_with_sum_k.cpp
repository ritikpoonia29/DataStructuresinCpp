/*
Concept: We have to find the smallest subsequence with sum k.
Approach: We will create a max heap and add the top of max heap until the sum is greater than or equal to k. Everytime increase a
          variable count by 1.
Dry Run:
    k = 13
    arr = 1 1 3 2 8
    max heap = 8 3 2 1 1 
Iteration 1:
Sum = 8
heap = 3 2 1 1
Iteration 2:
Sum = 11
heap = 2 1 1
Iteration 3:
Sum = 13
heap = 1 1
*/
#include<bits/stdc++.h>
using namespace std;

int minsubseq(vector<int> arr, int k)
{
    priority_queue<int, vector<int>> pq;
    int sum = 0;
    int count = 0;

    for(int i = 0;i<arr.size();i++)
    {
        pq.push(arr[i]);
    }

    while(!pq.empty())
    {
        sum += pq.top();
        pq.pop();
        count++;

        if(sum >= k)
        {
            return count;
        }
    }

    return -1;
}
int main()
{
    
    vector<int> v;

    int n;
    int k;
    cin>>n>>k;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;

        v.push_back(x);
    }

    int res = minsubseq(v, k);
    cout<<res<<endl;

}