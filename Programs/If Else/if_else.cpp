#include<iostream>
using namespace std;

int main()
{
    int savings;
    cout<<"Savings";
    cin>>savings;

if(savings>10000)
    {
        cout<<"I'll go for a trip.\n";
    }
    
    else if(savings>5000 && savings<10000)
    {
        cout<<"I'll buy clothes\n";
    }
    else if(savings<5000)
    {
        if(savings>2000)
        {
            cout<<"I'll go Zara\n";
        }
        else{
            cout<<"I'll buy flick\n";
        }
    }
    else{
        cout<<"I'll not go for shopping\n";
    }

    return 0;
}
