/*
Concept:
If a string has more than required parenthesis than it has redundant parenthesis.

Approach:
Take a stack and push all the operators and opening parenthesis in it.
Whenever you encounter any clsoing parethesis and at the top of the stack we have an operator then just pop it 
else if we have a opening parenthesis then return false as it has redundant porenthesis.

Dry Run:

S = ((a+b))
Stack: 1. (
       2. ( ( 
       3. ( ( +
       4. we have a closing parenthesis so pop from the stack twice.
       5. ( 
       6. Now we have an opening parenthesis at the top of stack so return true i.e. the parenthesis are redundant.
*/

#include<bits/stdc++.h>
using namespace std;

bool redundant(string s)
{
    stack<char> st;
    for(int i=0;i<s.length();i++)
    {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            st.push(s[i]);
        }
        else if(s[i] == '(')
        {
            st.push(s[i]);
        }
        else if(s[i] == ')')
        {
            if(st.top() == '(')
            {
                return true;
            }

            while(st.top() == '+' ||st.top() == '-' ||st.top() == '*' || st.top() == '/')
            {
                st.pop();
            }
            st.pop();
        }
    }
    return false;
}
int main()
{
    string s;
    cin>>s;

    if(redundant(s))
    {
        cout<<"Redundant Parenthesis\n";
    }
    else{
        cout<<"Non Redundant Parenthesis\n";
    }
}