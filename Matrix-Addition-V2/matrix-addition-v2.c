#include <stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m ,&n);
    int matrix1[m][n];
    int matrix2[m][n];
    int sum[m][n];
    int i = 0,j;
    while( i < m)
    {
        j = 0;
        while(j < n)
        {
            scanf("%d",&matrix1[i][j]);
            j++;
        }
        i++;
    }
    i = 0;
    while( i < m)
    {
        j = 0;
        while(j < n)
        {
            scanf("%d",&matrix2[i][j]);
            j++;
        }
        i++;
    }
    i = 0;
    while( i < m) 
    {
        j = 0;
        while(j < n)
        {
            sum[i][j] = matrix1[i][j] + matrix2[i][j];
            j++;
        }
        i++;
    }
    i = 0;
    while( i < m) 
    {
        j = 0;
        while(j < n)
        {
            printf("%d ",sum[i][j]);
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}