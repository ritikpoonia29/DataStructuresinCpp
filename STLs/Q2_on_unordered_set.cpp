// Sets-STL
// Link: https://www.hackerrank.com/challenges/cpp-sets/problem

// Problem:
// You will be given Q queries. Each query is of one of the following three types:

//   : Add an element  to the set.
//   : Delete an element  from the set. (If the number  is not present in the set, then do nothing).
//   : If the number  is present in the set, then print "Yes"(without quotes) else 
//     print "No"(without quotes).

// Input Format

// The first line of the input contains  where  is the number of queries. 
// The next  lines contain  query each. Each query consists of two integers  and  
// where  is the type of the query and  is an integer.

// Constraints




// Output Format

// For queries of type  print "Yes"(without quotes) if the number  is present in the set 
// and if the number is not present, then print "No"(without quotes).
// Each query of type  should be printed in a new line.

// Sample Input

// 8
// 1 9
// 1 6
// 1 10
// 1 4
// 3 6
// 3 14
// 2 6
// 3 6
// Sample Output

// Yes
// No
// No

#include<bits/stdc++.h>
using namespace std;

void eraase(unordered_set<int> &s, int p)
{
    auto it = s.find(p);
    if(it!=s.end())
    {
        s.erase(it);
    }
}

bool findd(unordered_set<int> &s, int p)
{
    auto it = s.find(p);
    if(it!=s.end())
    {
        return true;
    }
    else 
    {
        return false;
    }
    
}
int main()
{
    int q;
    cin>>q;
    
    unordered_set<int> s;
    while(q--)
    {
        int type, x;
        cin>>type>>x;
        
        if(type==1)
        {
            int p;
            p = x;
            s.insert(p);
        }
        else if(type == 2)
        {
            int p;
            p = x;
            eraase(s, p);
        }
        else if(type==3)
        {
            int p;
            p = x;
            if(findd(s,p))
            {
                cout<<"Yes\n";
            }
            else {
            cout<<"No\n";
            }
        }
    }
}