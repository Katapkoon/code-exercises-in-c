#include <stdio.h>
int main()
{
    int num1, num2, num3, sum;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    while(num1 - num2 > 0 && num1 - num3 > 0 && num2 - num3 > 0 || num2 - num1 > 0 && num2 - num3 > 0 && num1 - num3 > 0)
    {
        sum = num1 + num2;
        break;
    }
    while(num1 - num2 > 0 && num1 - num3 > 0 && num3 - num2 > 0 || num3 - num1 > 0 && num3 - num2 > 0 && num1 - num2 > 0)
    {
        sum = num1 + num3;
         break;
    }
    while(num2 - num1 > 0 && num2 - num3 > 0 && num3 - num1 > 0 || num3 - num1 > 0 && num3 - num2 > 0 && num2 - num1 > 0)
    {
        sum = num2 + num3;
         break;
    }
    printf("%d",sum);
    return 0;
}