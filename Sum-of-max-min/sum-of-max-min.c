#include <stdio.h>
int main()
{
    int num[3];
    int min,max;
    scanf("%d %d %d", &num[0], &num[1], &num[2]);
    min = num[0];
    max = num [0];
    for(int i = 0; i < 3; i++)
    {
        if(min > num[i])
        {
            min = num[i];
        }
        else if (max < num[i])
        {
            max = num[i];
        }
    }
    printf("%d",max + min);
    return 0;
}