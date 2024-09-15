#include <stdio.h>
int main()
{
    float h,w;
    printf("Please input your weight (kg) : ");
    scanf("%f",&w);
    printf("Please input your height (m) : ");
    scanf("%f",&h);
    printf("BMI = %.2f", w/(h*h));
    return 0;
}