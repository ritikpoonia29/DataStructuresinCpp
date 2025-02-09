#include <bits/stdc++.h>
using namespace std;


    int searchkey(int arr[], int l, int r, int key)
    {
        if (l > r)
        {
            return -1;
        }

        int mid = (l + r) / 2;
        
        if(arr[mid] == key)
        {
            return mid;
        }

        if(arr[l] <= arr[mid])
        {
            if(key<= arr[l] && key>= arr[mid])
            {
                return searchkey(arr, l, mid-1, key);
            }
            return searchkey(arr, mid+1, r, key);
        }

        if(key >= arr[mid] && key<=arr[r])
        {
            return searchkey(arr, mid+1, r, key);
        }
        return searchkey(arr, l, mid-1, key);
    }

int main()
{
    int n;
  
    int key;

    cin >> n >> key;
      int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<searchkey(arr, 0, n - 1, key)<<endl;
}