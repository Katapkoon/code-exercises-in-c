#include <stdio.h>
int main()
{
    int q,max,min;
    scanf("%d",&q);
    int num[q];
    for(int i = 0; i < q; i++)
    {
        scanf("%d",&num[i]);
    }
    min = num[0];
    max = num[0];
    for(int j = 0; j < q; j++)
    {
        if(min> num[j])
        {
            min = num[j];
        }
        else if (max < num[j])
        {
            max = num[j];
        }
    }
    printf("%d\n%d", min, max);
    return 0;
}