#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(j = 1; j <= n; ++j)
    {
        for(i = 1; i <= 2*n-1; ++i)
        {
            if(j == 1 || (i==j) || (i+j == 2*n))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    for(j = n+1; j <= 2*n-1; ++j)
    {
        for(i = 1; i <= 2*n-1; ++i)
        {
            if(j == 2*n-1 || (i==j) || (i+j == 2*n))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}