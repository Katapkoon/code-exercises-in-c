#include <stdio.h>
int main()
{
    int i;
    const float students = 10;
    float h[10];
    for(i = 0; i < students; i++)
    {
        scanf("%f",&h[i]);
    }
    i = 0;
    while (i < students)
    {
        printf("height %d : %.2f\n",i + 1,h[i]);
        ++i;
    }
    float sum = 0;
    i = 0;
    while (i < students)
    {
        sum = sum + h[i];
        ++i;
    }
    float mean = sum/students;
    printf("mean : %.2f",mean);
    return 0;
}