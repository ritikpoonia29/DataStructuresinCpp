#include<bits/stdc++.h>
using namespace std;

class solution{
    public:
    int LongestSubstring(string s)
    {
        vector<int> m(256, -1);
        int len = 0;
        int n = s.size();
        int left = 0;
        int right = 0;

        while(right<n)
        {
            if(m[s[right]] != -1)
            {
                left = max(m[s[right]]+1, left);
            }
            m[s[right]] = right;

            len = max(len, right-left + 1);
            right++;
        }

        return len;

    }
};

int main()
{
    solution sol;

    string s;
    cin>>s;

    cout<<sol.LongestSubstring(s)<<endl;
}