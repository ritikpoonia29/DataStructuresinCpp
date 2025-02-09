#include<iostream>
using namespace std;

int main()
{
     char arr[50];
     cin>>arr;

     int i=0;
     while(arr[i] != '\0')
     {
         cout<<arr[i]<<endl;
         i++;
     }
}