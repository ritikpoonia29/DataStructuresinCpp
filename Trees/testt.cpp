#include<bits/stdc++.h>
using namespace std;

class transport{
    public:
    int speed;

    tansport(){};

    void display()
    {
        cout<<speed<<endl;
    }
};

class car: public transport{
    public:
    int speed;

    car(){}

    void setcar()
    {
        cout<<"Enter speed of car: \n";
        cin>>speed;
    }

    void display()
    {
        cout<<speed<<endl;
    }
};

class boat: public transport{
    public:
    int speed;

    boat(){}

    void setboat()
    {
        cout<<"Enter speed of boat: ";
        cin>>speed;
    }

    void display()
    {
        cout<<speed<<endl;
    }
};

class plane: public transport{
    public:
    int speed;

    plane(){}

    void setplane()
    {
        cout<<"Enter speed of plane: ";
        cin>>speed;
    }

    void display()
    {
        cout<<speed<<endl;
    }
};

int main()
{
    car c;
    boat b;
    plane p;
    c.setcar();
    b.setboat();
    p.setplane();
    c.display();
    b.display();
    p.display();

}