#include<bits/stdc++.h>
#include<list>
using namespace std;

class vehicle
{
    public:
    list<string> avail;
    list<string> rent;
    int a;
    int r;


    vehicle(){}

    void set_avail()
    {
        cout<<"Enter the no of vehicles availabel: ";
        cin>>a;

        cout<<"Enter the details of vehicles: ";
        for(int i=1;i<=a;i++)
        {
            string name;
            cin>>name;
            avail.push_back(name);
        }

        cout<<"Enter the no of vehicles rented: ";
        cin>>r;

        cout<<"Enter the details of vehicles: ";
        for(int i=1;i<=r;i++)
        {
            string name2;
            cin>>name2;
            rent.push_back(name2);
        }
    }

    void display()
    {

        cout<<"List of available vehicles\n";
        for(auto it = avail.begin(); it!=avail.end();it++)
        {
            cout<<*it<<endl;
        }
        cout<<"\n\n";

        cout<<"List of rented vehicles\n";
        for(auto it = rent.begin(); it!=rent.end();it++)
        {
            cout<<*it<<endl;
        }
    }

};

int main()
{
    vehicle v;
    v.set_avail();
    v.display();
}