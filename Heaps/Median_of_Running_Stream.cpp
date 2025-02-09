/*
Concept: We have a priority queue in which elements are inserted and at every insertion we have to find the median of the queue.

Approach(Insertion): Bifurcate the array into two heaps. (i. Minheap       ii. Maxheap)
        If their sizes are equal and they do not have any element then push the element in max heap.
            else if they have some element then check
                If the top of the max heap is greater than x then push x in min heap
                else push it in maxheap.
        else if their sizes are not equal then check
            if max heap is greater than min heap
                if x is greater than or equal to the top of max heap
                    then push x in top of min heap.
                else store the top of max heap in temp.
                    pop the top from maxheap.
                    store temp in in min heap
                    store x in max heap.
            else if max heap is smaller than min heap
                if x is less than the top of max heap
                    then push it in the max heap.
                else store the top of the min heap in temp.
                    pop the top of min heap
                    store the temp in max heap
                    store x in min heap.

Approach(Finding Median): If the size of max heap and min heap are equal
                            then return the mean of top of max heap and top of min heap.
                          else if the size of max heap is greater than the size of the min heap
                            then return the top of max heap
                          else if the size of min heap is greater than the size of the max heap
                            then return the top of the min heap.
*/

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