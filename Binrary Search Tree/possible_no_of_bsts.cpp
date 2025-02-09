#include<bits/stdc++.h>
using namespace std;

int possible_no_of_bst(int n)
{
    if(n<=1)
    {
        return 1;
    }

    int res = 0;

    for(int i=0;i<n;i++)
    {
        res+=possible_no_of_bst(i)*possible_no_of_bst(n-1-i);
    }

    return res;
}
int main()
{
    int n;
    cout<<"Enter the total number of nodes\n";
    cin>>n;

    cout<<"Total number of possible BSTs are: "<<possible_no_of_bst(n)<<endl;


}