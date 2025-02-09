// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
class Solution {
  public:
    void solveQueries(int n, int num, vector<int> &a, vector<vector<int>> &q) 
    {
       vector<pair<int, int>> ans;
       
       unordered_map<int, int> mp;
       
       for(int i=0;i<n;i++)
       {
           mp[a[i]]++;
       }

       for(auto it: mp)
       {
        ans.push_back({it.first, it.second});
       }

    //    for(auto it: ans)
    //    {
    //     cout<<it.first<<" "<<it.second<<endl;
    //    }
       for(int i=0;i<num;i++)
       {
           int l = q[i][0];
           int r = q[i][1];
           int k = q[i][2];

        //    cout<<l<<r<<k<<endl;
           int count = 0;
           for(int j = l;j<=r;j++)
           {
               for(auto it : mp)
               {
                   if(it.first == a[j] && it.second == k)
                   {
                    //    count++;
                    //    break;

                    cout<<it.first<<" "<<it.second<<endl;
                   }
               }
           }
        //    ans.push_back(count);
       }
    //    return ans;
    }
};


// { Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        // vector<int> res
        obj.solveQueries(N, num, A, Q);
        
        // for(auto ele:res){
        //     cout<<ele<<" ";
        // }
        // cout<<endl;
    }
}
  // } Driver Code Ends
