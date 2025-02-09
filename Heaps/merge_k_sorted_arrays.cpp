/*
Concept: We are given k numbers of sorted arrays each of size k and we have to make a sorted array using all of them.
Approach: Take vector of pair. One stores the avlue of the element and the other stores its position in the array.
          Push all the elements in the min heap along with their row number.
          At every iteration:
          Store the value of first of pair at the top of the min heap in the answer vector and second of the pair in variable row 
          and pop the elment from the heap.
          Increase the row by 1 and push the new value in the heap.
          Do this until the heap is empty.
Dry Run: 
k = 3;
Arr = {{4,5,6},{1, 2, 3},{7, 8, 9}}
pq = {{1,0},{2,1},{3,2},{4,0},{5,1},{6,2},{7,0},{8,1},{9,2}}
Ans = {}
ptr[K] = {}
Iteration 1:
  ans = 1
  row = 0
  ptr[row] = 1;
Teration 2:
{{2,1},{3,2},{4,0},{5,1},{6,2},{7,0},{8,1},{9,2}}
    ans = 1 2
    row = 1
    ptr[row] = 1;
Iteration 3:
{{3,2},{4,0},{5,1},{6,2},{7,0},{8,1},{9,2}}
    ans = 1 2 3
    row = 2
    ptr[row] = 1
Iteration 4:
{{4,0},{5,1},{6,2},{7,0},{8,1},{9,2}}
    ans = 1 2 3 4
    row = 0
    ptr[row] = 2
Iteration 5:
{{5,1},{6,2},{7,0},{8,1},{9,2}}
    ans = 1 2 3 4 5
    row = 1
    ptr[row] = 2
Iteration 6:
{{6,2},{7,0},{8,1},{9,2}}
    ans = 1 2 3 4 5 6
    row = 2
    ptr[row] = 2
Iteration 7:
{{7,0},{8,1},{9,2}}
    ans = 1 2 3 4  5 6 7
    row = 0
    ptr[row] = 3
Iteration 8:
{{8,1},{9,2}}
    ans = 1 2 3 4 5 6 7 8
    row = 1
    ptr[row] = 3
Iteration 9:
{{9,2}}
    ans = 1 2 3 4 5 6 7 8 9
    row = 2
    ptr[row] = 3
    
*/

#include<bits/stdc++.h>
using namespace std;

    vector<int> ksorted(vector<vector<int>> arr, int K)
    {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
        vector<int> ans;
        int ptr[K] = {};
        
        for(int i = 0;i<K;i++)
        {
            pq.push({arr[i][0], i});
        }
        
        while(!pq.empty())
        {
            pair<int, int> p = pq.top();
            ans.push_back(p.first);
            int row = p.second;
            ptr[row]++;
            
            if(ptr[row] < K)
            {
                pq.push({arr[row][ptr[row]], row});
            }
            pq.pop();
        }
        return ans;
    }

    int main()
    {
         int k;
	    cin>>k;
	    vector<vector<int>> arr(k, vector<int> (k, 0));
	    for(int i=0; i<k; i++){
	        for(int j=0; j<k; j++)
	        {
	            cin>>arr[i][j];
	        }
	    }

    	vector<int> output = ksorted(arr, k);

        for(auto i: output)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }