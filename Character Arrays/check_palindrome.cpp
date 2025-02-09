// Palindrome are those words which comes out to be same when written in reverse order also.

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    char arr[n+1];
    int temp=0;

    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    for(int i=0;i<n;i++)
    {
        if(arr[i] != arr[n-i-1])
        {
            temp++;
        }
    }

    if(temp>0)
    {
        cout<<"It is not a Palindrome of its original."<<endl;
    }
    else
    {
         cout<<"It is a Palindrome of its original."<<endl;
    }
    
    

}
