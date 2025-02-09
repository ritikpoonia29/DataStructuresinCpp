#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Max Heap Priority Queue
    priority_queue<int, vector<int>> pq_max_heap;

    pq_max_heap.push(1);
    pq_max_heap.push(2);
    pq_max_heap.push(3);

    cout<<pq_max_heap.top()<<endl;  // 3
    pq_max_heap.pop();
    cout<<pq_max_heap.top()<<endl;  // 2

    // Min Heap Priority Queue

    priority_queue<int, vector<int>, greater<int>> pq_min_heap;

    pq_min_heap.push(1);
    pq_min_heap.push(2);
    pq_min_heap.push(3);

    cout<<pq_min_heap.top()<<endl;  // 1
    pq_min_heap.pop();
    cout<<pq_min_heap.top()<<endl;  //2
}