#include <stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(j = 1; j <= 2*n-1; j++)
    {
        for(i = 1; i <= 2*n-1; i++)
        {
            if((i >= j && i + j <= 2*n) || (i + j >= 2*n && i <= j) )
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