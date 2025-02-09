#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    int a1, a2, a3, a4;
    if(0<=t<=1000)
    {
    while(t>0)
    {
        scanf("%d%d%d%d", &a1, &a2, &a3, &a4);

        if(0<=a1<=10 && 0<=a2<=10 && 0<=a3<=10 && 0<=a4<=10)
        {
            if((a1!=a2 && a2!=a3 && a3!=a4) || (a1!=a2 && a2==a3 && a3!=a4))
            {
                printf("2\n");
            }
            else if((a1==a2 && a2!=a3 && a3!=a4) || (a1!=a2 && a2!=a3 && a3==a4) || (a1==a2 && a2==a3 && a3!=a4) || (a1!=a2 && a2==a3 && a3==a4))
            {
                printf("1\n");
            }
            else if((a1==a2 && a2==a3 && a3==a4) || (a1 == a2 && a3==a4))
            {
                printf("0\n");
            }
        }t--;
    }
    }
}
