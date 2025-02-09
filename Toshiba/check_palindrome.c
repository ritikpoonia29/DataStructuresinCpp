#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<stdbool.h>

bool palindrome(char str[], int i, int j)
{
    while(i<j)
    {
        if(str[i] != str[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    int n;
    scanf("%d", &n);

    char str[100];
    scanf("%s", &str);

    int i = 1;
    int j = n;

    n = strlen(str);

    if(palindrome(str, 0, n-1))
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    

}
