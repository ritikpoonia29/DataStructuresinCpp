/*
Concept: A Heap is a special Tree-based data structure in which the tree is a complete binary tree. Generally, Heaps can be of two types:

Max-Heap: In a Max-Heap the key present at the root node must be greatest among the keys present at all of it’s children. 
The same property must be recursively true for all sub-trees in that Binary Tree.

Min-Heap: In a Min-Heap the key present at the root node must be minimum among the keys present at all of it’s children. 
The same property must be recursively true for all sub-trees in that Binary Tree.

Approach: The tree is formed in such a way that the root node is the larger than it children.
          If the root node is smaller than the child the we swap it and this follows in the whole tree.
*/

#include<bits/stdc++.h>
using namespace std;

#define vi vector<int>
#define rep(i, a, b) for(int i=a;i<b;i++)
#define prod(i, a) for(auto i: a)


void heapify(vi &a, int n, int i)
{
    int maxIdx = i;
    int l = 2*i + 1;
    int r = 2*i + 2;

    if(l<n && a[l]>a[maxIdx])
    {
        maxIdx = l;
    }

    if(r<n && a[r]>a[maxIdx])
    {
        maxIdx = r;
    }

    if(maxIdx != i)
    {
        swap(a[i], a[maxIdx]);

        heapify(a, n, maxIdx);
    }

}

void heapsort(vi &a)
{
    int n = a.size();

    for(int i=(n/2)-1;i>=0;i--)
    {
        heapify(a, n, i);
    }

    for(int i=n-1;i>0;i--)
    {
        swap(a[0], a[i]);
        heapify(a, i, 0);
    }
}

int main()
{
    int n;
    cin>>n;
    vi v;

    rep(i,0,n)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }

    heapsort(v);

    prod(i, v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
}