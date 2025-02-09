// #include<bits/stdc++.h>
// using namespace std;

// int main()
// {
//     pair<int, string> p;

//     // p = make_pair(2, "a");
//     p = {1,"abc"};

//     pair<int, string> &p1 = p;
//     p1.first = 3;
//     p1.second = "def";

//     cout<<p.first<<" "<<p.second<<endl;

//     int a[] = {1,2,3};
//     int b[] = {4,5,6};

//     pair<int, int> p_array[3];
//     p_array[0] = {1,2};
//     p_array[1] = {3,4};
//     p_array[2] = {5,6};

//     swap(p_array[0].first, p_array[2].second);
//     for(int i=0;i<3;i++)
//     {
//         cout<<p_array[i].first<<" "<<p_array[i].second<<endl;
//     }


//     // cout<<p.first<<" "<<p.second<<endl;
// }

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    pair<int , string> s[n];

    for(int i=0;i<n;i++)
    {
        int x;
        string p;

        cin>>x>>p;

        s[i] = make_pair(x,p);
    }

    for(int i=0;i<n;i++)
    {
        cout<<s[i].first<<" "<<s[i].second<<endl;
    }
}