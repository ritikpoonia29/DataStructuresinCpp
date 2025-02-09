#include<bits/stdc++.h>
using namespace std;

class solution
{
    public:
string reverse_sen(string S)
{
    stack<string> st;

    for(int i=0;i<S.length();i++)
    {
        string word = "";
        while(S[i]!=' ' && i<S.length())
        {
            word+=S[i];
            i++;
        }
        st.push(word);
    }

    string sf;
    while(!st.empty())
    {
        sf+=st.top();
        st.pop();
    }
    return sf;
}
};

int main()
{
    string s = "My name is Ritik";
    solution ob;
    cout<<ob.reverse_sen(s)<<endl;

}