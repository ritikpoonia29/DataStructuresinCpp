#include<stdio.h>
#include<stdbool.h>

bool prime(int n)
{
    for(int i=1;i<=n/2;i++)
    {
        if(n%i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    int n;
    scanf("%d", &n);

    if(prime(n))
    {
        printf("Prime\n");
    }
    else
    {
        printf("Not Prime\n");
    }
}