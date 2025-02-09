#include<bits/stdc++.h>
using namespace std;

class child{
    int z;
    public:
    int x;

    void displayChild()
    {
        cout<<"Child: "<<x<<endl;
    }
};

class parent : public child{
public:
int y;

void displayParent()
{
    cout<<"Parent: "<<y<<endl;
    cout<<"Child: "<<x<<endl;
    cout<<"Child: "<<z<<endl;
    displayChild();
}
};
int main()
{

    parent p;
    
    p.y = 10;
    p.displayParent();

    p.x = 20;
    p.displayChild();


}