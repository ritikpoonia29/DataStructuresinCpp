#include<iostream>
using namespace std;

int main()
{
    int s1,s2,s3;

    cout<<"Enter the length of side 1: "<<endl;
    cin>>s1;

    cout<<"Enter the length of side 2: "<<endl;
    cin>>s2;

    cout<<"Enter the length of side 3: "<<endl;
    cin>>s3;

    if(s1==s2 && s2==s3){
        cout<<"Equilateral"<<endl;
    }
    else if(s1==s2||s2==s3||s1==s3)
    {
        cout<<"Isosceles"<<endl;
    }

    else{
        cout<<"Scalene"<<endl;
    }
}