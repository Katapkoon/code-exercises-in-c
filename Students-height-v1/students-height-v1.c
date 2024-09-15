#include <stdio.h>
int main()
{
    float h[10];
    float sum = 0;
    for(int i = 0;i < 10; i++)
    {
        scanf("%f",&h[i]);
        sum += h[i];
    }
    for(int i = 0;i < 10; i++)
    {
        printf("height %d : %.2f\n",i + 1,h[i]);
    }
    float mean = sum/10.00;
    printf("%.2f",mean);
    return 0;
}