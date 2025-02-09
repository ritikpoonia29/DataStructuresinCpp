#include<iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int a, b;
    cin>>a>>b;

    int *aptr = &a;
    int *bptr = &b;

    swap(aptr, bptr);

    cout<<a<<endl<<b<<endl;
}