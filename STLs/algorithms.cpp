#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v;

    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    //Maximum Element
    int m = *max_element(v.begin(), v.end());
    cout<<m<<endl;
    //Minimum Element
    int p = *min_element(v.begin(), v.end());
    cout<<p<<endl;
    //Sum of vector
    int s = accumulate(v.begin(), v.end(), 0);
    cout<<s<<endl;
    //Count the occurences
    int z = count(v.begin(), v.end(), 2);
    cout<<z<<endl;
    //Find the number
    auto f = find(v.begin(), v.end(), 5);
    if(f!=v.end())
    cout<<(*f)<<" ";
    
    cout<<endl;
    // Reverse the vector, array or strings
    reverse(v.begin(), v.end());
    for(auto it: v)
    {
        cout<<it<<endl;
    }

    // Lambda Function
    auto sum = [](int x, int y){return (x+y);};
    cout<<sum(10,12)<<endl;

    vector<int> a = {2,-4,5};
    auto pos = [](int x){return x>0;};
    //All the elements of the vector satisfy the condition given in the vector 
    cout<<all_of(a.begin(), a.end(), pos)<<endl;
    // Any of the element of the vector satisfy the condition given in the vector  
    cout<<any_of(a.begin(), a.end(), pos)<<endl;
    // None of the element of the vector satisfy the condition given in the vector 
    cout<<none_of(a.begin(), a.end(), pos)<<endl;
}