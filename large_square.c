#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    int n;
    int a, q=0, l=0;
    int iVar;
    float fVar;

   
    while(t--)
    {
        scanf("%d%d", &n, &a);

            if(n>=4)
            {
                if(n%4==0)
                {
         q = n/4;
        l = q * a;
        
        }
        else if(n%4!=0)
        {
             q = n/4;
        l = (q+1) * a;

        }
            }
        else{
            l = a;
        }

        printf("%d\n", l);
    }
}

