#include<iostream>
using namespace std;

char results(int r1, int r2, int w1, int w2, int c1, int c2)
{
    int count=0;
       if(r1>r2)
       {
           if(w1>w2 && c1>c2)
           {
               count = count+3;
           }
           else if(w1>w2 || c1>c2)
           {
               count = count+2;
           }
       }
       else if(w1>w2)
       {
           if(r1>r2 && c1>c2)
           {
               count = count+3;
           }
           else if(r1>r2 || c1>c2)
           {
               count = count + 2;
           }
       }
       else if(c1>c2)
       {
           if(w1>w2 && r1>r2)
           {
               count = count+3;
           }
           else if(w1>w2 || r1>r2)
           {
               count++;
           }
       }

       if(count>=2)
       {
           return 'A';
       }
       else
       {
           return 'B';
       }
}
int main()
{
    int t;
    scanf("%d", &t);

    int r1, r2, w1, w2,c1, c2;
    while(t>0)
    {
        int r1, r2, w1, w2,c1, c2;

        scanf("%d%d%d", &r1, &w1, &c1);
        scanf("%d%d%d", &r2, &w2, &c2);

         cout<<results(r1, r2, w1, w2,c1, c2)<<endl;
        t--;

    }


}
