#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];
    int max = arr[0];
    int min = arr[1];

for(int i=0;i<n;i++)
{
    cin>>arr[i];
}
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
    }

     for(int i=0;i<n;i++)
     {
         if(arr[i]<min)
         {
             min = arr[i];
         }
     }

    cout<<max<<endl;
    cout<<min<<endl;
}