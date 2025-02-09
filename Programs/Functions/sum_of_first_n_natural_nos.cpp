#include<iostream>
#include<math.h>
using namespace std;

int sum(int n)
{
    int s=0;
    for(int i=1;i<=n;i++)
    {
        s+=i;
    }
    return s;
}

int main()
{
    int n;
    cout<<"Enter the value of n: ";
    cin>>n;
    
    cout<<"Sum: "<<sum(n)<<endl;

    return 0;
}
