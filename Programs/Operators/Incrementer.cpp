#include<iostream>
using namespace std;

int main()
{
    int i=1, j=2, k;

    k = i + j + i++ + j++ + ++i + ++j;
       //1+//2+//1 + //2  +  //3  +  //4

       cout<<k<<" "<<i<<" "<<j<<endl;

       return 0;
}