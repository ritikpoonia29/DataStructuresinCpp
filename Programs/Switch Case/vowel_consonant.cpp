#include<iostream>

using namespace std;

int main()
{
    char sen;
    
    cout<<"Enter the alphabet\n";
    cin>>sen;

    switch(sen)
    {
        case 'a': 
        cout<<"Vowel\n";
        break;

        case 'e': 
        cout<<"Vowel\n";
        break;

        case 'i': 
        cout<<"Vowel\n";
        break;

        case 'o': 
        cout<<"Vowel\n";
        break;

        case 'u': 
        cout<<"Vowel\n";
        break;

        default: cout<<"Consonant\n";
    }
}