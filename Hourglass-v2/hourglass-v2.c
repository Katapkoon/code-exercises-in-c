#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j = 1; j <= n; j++)
    {
        for(i = 1; i <= j - 1; i++ )
        {
            printf(" ");
        }
        for(i = 1; i <= 2*(n-j)+ 1; i++ )
        {
            printf("*");
        }
        printf("\n");
    }
    for(j = 1; j <= n-1; j++)
    {
        for(i = 2; i <= n-j; i++)
        {
            printf(" ");
        }
        for(i = 1; i <= 2*j+1; i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}