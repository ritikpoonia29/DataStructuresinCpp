#include<bits/stdc++.h>
using namespace std;

vector<vector<string> solve(vector<vector<string>>v, string d, string k)
{
    vector<vector<string>> ans;
    int n = v.size();
    set<vector<string>> s;
    int count;
    if(d == "bank_account_number")
    {
        count = 1;
    }
    else if(d == "account_holder_first_name")
    {
        count = 2;
    }
    else if(d == "account_holder_last_name")
    {
        count = 3;
    }
    else if(d == "registered_mobile_number")
    {
        count = 4;
    }
    else if(d == "branch_code")
    {
        count = 5;
    }

    for(int i=0;i<n;i++)
    {
        if(v[i][count-1].compare(k) == 0)
        {
            s.insert(v[i]);
        }
    }

    for(auto it: s)
    {
       ans.push_back(it);
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    vector<vector<string>> v;

    for(int i=0;i<n;i++)
    {
        vector<string> temp;
        for(int j=0;j<5;j++)
        {
            string x;
            cin>>x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }

    string d;
    string k;
    cin>>d>>k;
    solve(v, d, k);

}