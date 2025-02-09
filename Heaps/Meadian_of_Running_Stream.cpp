#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
priority_queue<int, vi> pqmax;
priority_queue<int, vi, greater<int>> pqmin;

void insert(int x)
{
    if (pqmax.size() == pqmin.size())
    {
        if (pqmax.size() == 0)
        {
            pqmax.push(x);
            return;
        }

        if (pqmax.top() < x)
        {
            pqmin.push(x);
        }
        else
        {
            pqmax.push(x);
        }
    }
    else
    {
        if (pqmax.size() > pqmin.size())
        {
            if (x >= pqmax.top())
            {
                pqmin.push(x);
            }
            else
            {
                int temp = pqmax.top();
                pqmax.pop();
                pqmin.push(temp);
                pqmax.push(x);
            }
        }
        else
        {
            if (x < pqmax.top())
            {
                pqmax.push(x);
            }
            else
            {
                int temp = pqmin.top();
                pqmin.pop();
                pqmax.push(temp);
                pqmin.push(x);
            }
        }
    }
}

double findmean()
{
    if (pqmax.size() == pqmin.size())
    {
        return (pqmin.top() + pqmax.top()) / 2.0;
    }
    else if (pqmax.size() > pqmin.size())
    {
        return pqmax.top();
    }
    else if (pqmin.size() > pqmax.size())
    {
        return pqmin.top();
    }
}

int main()
{
    insert(10);
    cout << findmean() << endl;
    insert(15);
    cout << findmean() << endl;
    insert(20);
    cout << findmean() << endl;
    insert(25);
    cout << findmean() << endl;
    insert(30);
    cout << findmean() << endl;
    insert(35);
    cout << findmean() << endl;
    insert(40);
    cout << findmean() << endl;
}