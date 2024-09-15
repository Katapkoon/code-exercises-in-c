#include <stdio.h>
int main()
{
    int arr[10];
    int i,sum_even = 0, sum_odd = 0,result;
    printf("Data in array : ");
    for(i = 0; i < 10; ++i)
    {
        scanf("%d",&arr[i]);
    }
    for(i = 0; i < 10; ++i)
    {
        if(arr[i] % 2 == 0)
        {
            sum_even += i+1;
        }
        else
        {
            sum_odd += i+1;
        }
    }
    //printf("%d %d",sum_even,sum_odd);
    result = sum_odd - sum_even;
    printf("Result : %d", result);
    return 0;
}