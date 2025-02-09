#include<iostream>
using namespace std;

int main()
{
    int m;
    cout<<"Enter the first no: \n";
    cin>>m;

    int sum=0;
    while(m>=0)
    {
        sum += m;
        cout<<"Enter the next number: \n";
        cin>>m;
    }

    cout<<"Sum"<<endl;
    cout<<sum<<endl;

    return 0;
}
