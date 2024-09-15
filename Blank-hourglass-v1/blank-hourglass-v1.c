#include <stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    for(j = 1; j <= 2*n - 1; ++j)
    {
        for(i = 1; i <= 2*n -1; ++i)
        {
            if((i == j) || (i+j == 2*n) || j == 1 || j == 2*n-1)
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
    return 0;
}