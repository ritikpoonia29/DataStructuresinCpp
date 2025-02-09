#include<iostream>
using namespace std;

int search(int a[], int n, int key)
{
    for(int i=0;i<n;i++)
    {
        if(key == a[i])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;

    int key;
    cin>>key;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<search(a, n, key)<<endl;

    return 0;
}