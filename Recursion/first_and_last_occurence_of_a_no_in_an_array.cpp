#include<iostream>
using namespace std;

int firstocc(int a[], int n, int key, int i)
{
    if(i==n)
    {
        return -1;
    }
    if(a[i] == key)
    {
        return i;
    }
    return firstocc(a, n, key, i+1);
}

int lastocc(int a[], int n, int key, int i)
{
     if(i==n)
    {
        return -1;
    }

    int restarray = lastocc(a, n, key, i+1);
    if(restarray != -1)
    {
        return restarray;
    }
    if(a[i] == key)
    {
        return i;
    }
    return -1;
}

int main()
{
    int n, key;
    cin>>n>>key;

    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    cout<<firstocc(a, n , key, 0)<<" ";
    cout<<lastocc(a, n , key, 0)<<endl;
}