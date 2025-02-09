#include<iostream>
using namespace std;

int main()
{
    string str;
    cin>>str;

    str.erase(3,2);  // Delete 2 characters starting from 3rd element.

    cout<<str<<endl;
}