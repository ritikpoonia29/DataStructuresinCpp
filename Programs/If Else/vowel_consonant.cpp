#include<iostream>
using namespace std;

int main()
{
    char c;
    int low, up;

    cout<<"Enter the alphabet: "<<endl;
    cin>>c;

    if(c == 'a'||c == 'A'||c == 'e'||c == 'E'||c == 'i'||c == 'I'||c == 'o'||c == 'O'||c == 'u'||c == 'U')
    {
        cout<<"Vowel"<<endl;
    }
    else
    cout<<"Consonant"<<endl;
}