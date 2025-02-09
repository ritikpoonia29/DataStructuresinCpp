#include<iostream>
#include<math.h>
using namespace std;

bool istriplet(int x, int y, int z)
{
    int a,b,c;
    a = max(x,max(y,z));

    if(a==x)
    {
        b=y;
        c=z;
    }
    else if(a==y)
    {
        b=x;
        c=z;
    }
    else{
        b=x;
        c=y;
    }

    if(a*a == b*b + c*c)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;

    if(istriplet(x,y,z))
    {
        cout<<"Pythogorian triplet"<<endl;
    }
    else{
        cout<<"Not a pyhtogorian triplet"<<endl;;
    }
    return 0;
}

