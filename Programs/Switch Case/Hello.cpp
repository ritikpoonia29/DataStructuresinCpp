#include<iostream>

using namespace std;

int main()
{
    char sen;

    cout<<"Enter the Alphabet: \n";
    cin>>sen;

    switch(sen)
    {
        case 'a':
        cout<<"Hello\n";
        break;

        case 'b':
        cout<<"Hola\n";
        break;

        case 'c':
        cout<<"Namaste\n";
        break;

        case 'd':
        cout<<"Ciao\n";

        default: cout<<"I am still learning\n";
    }
}