#include<bits/stdc++.h>
using namespace std;

class child{
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