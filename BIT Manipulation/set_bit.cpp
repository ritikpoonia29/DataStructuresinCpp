#include<iostream>
using namespace std;

int setbit(int n, int pos)
{
    return(n|(1<<pos));
}
int main()
{
    int n, pos;
    cin>>n>>pos;

    cout<<setbit(n, pos)<<endl;
}