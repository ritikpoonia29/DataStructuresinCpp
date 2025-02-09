#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main()
{
    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i=1;i<=n;i++)
    {
        scanf("%d", &arr[i]);
    }
   
    int check[n];

    for(int i=1;i<=n;i++)
    {
        check[i] = -1;
    }
    
    for(int i=1;i<=n;i++)
    {
        check[arr[i]]++;
    }

    bool flag = true;
    for(int i=1;i<=n;i++)
    {
        if(check[i] > 0)
        {
            flag = false;
            break;
        }
    }
    if(!flag)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

}