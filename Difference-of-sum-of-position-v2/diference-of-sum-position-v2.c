#include <stdio.h>
int main()
{
    int arr[10];
    char set[10];
    int i,j,sum_even = 0,sum_odd = 0,result;
    
    printf("Data in array : ");
    for(i = 0; i < 10; ++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < 10; ++i)
    {
        j = i;
        if(arr[i] % 2 == 0) // e = even, o = odd
        {
            set[j] = 'e';
        }
        else
        {
            set[j] = 'o';
        }
        if(set[j] == 'e')
        {
            sum_even += j + 1;
        }
        else if(set[j] == 'o')
        {
            sum_odd += j + 1; 
        }
    }
    /*for(j = 0; j < 10; ++j)
    {
        printf("%c ",set[j]);
    }*/
    //printf("\n");
    //printf("%d %d",sum_even,sum_odd);
    result = sum_odd - sum_even;
    printf("Result : %d",result);
    return 0;
}