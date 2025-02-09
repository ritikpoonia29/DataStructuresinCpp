#include<iostream>
using namespace std;

int countinv(int a[], int n)
{
    int count = 0;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                count++;
            }
        }
    }
    return count;
}
int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<countinv(a,n)<<endl;
}