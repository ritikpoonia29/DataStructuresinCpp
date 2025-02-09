#include<bits/stdc++.h>
using namespace  std;

int precedence(char s)
{
    if(s == '^')
    {
        return 3;
    }
    else if(s == '/' || s == '*')
    {
        return 2;
    }
    else if(s == '+' || s == '-')
    {
        return 1;
    }
    else 
    {
        return -1;
    }
}

string infixToPostfix(string s)
{
    stack<int> st;
    string res;
    for(int i = 0;i<s.length();i++)
    {
        if((s[i] >= 'a' && s[i] <= 'z') ||(s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= '0' && s[i] <= '9'))
        {
            res+=s[i];  //Print whenever there is a operand.
        }
        else if(s[i] == '(')
        {
            st.push(s[i]);      // Push into the stack if there is a opening parenthesis.
        }
        else if(s[i] == ')')
        {
            while(!st.empty() && st.top() != '(')
            {
                res+=st.top();
                st.pop();    // Pop the elements until u get a opening parenthesis and keep a check that your stack doesn't get empty.
            }

            if(!st.empty())
            {
                st.pop();   // Pop the parenthesis also but don't add it in the expression.
            }
        }
        else
        {
            while(!st.empty() && precedence(st.top()) > precedence(s[i]))
            {
                res+=st.top();
                st.pop();   // Add the operator in the string and pop but before adding compare the precedence of the element at the top of the stack with the precedence of the operator to be pushed in the stack.
            }
            st.push(s[i]);
        }

    }
    
        while(!st.empty())
        {
            res+=st.top();
            st.pop();    //Add the remainig elements of the stack into the resulting expression.
        }

    return res;
}
int main()
{
    string s;
    cin>>s;

    cout<<infixToPostfix(s)<<endl;

}