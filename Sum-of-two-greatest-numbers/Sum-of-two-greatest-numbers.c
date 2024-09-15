#include <stdio.h>
int main()
{
    int num1, num2, num3, sum;
    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    if(num1 > num2 && num1 > num3 && num2 > num3 || num2 > num1 && num2 > num3 && num1 > num3)
    {
        sum = num1 + num2;
    }
    else if(num1 > num2 && num1 > num3 && num3 > num2 || num3 > num1 && num3 > num2 && num1 > num2)
    {
        sum = num1 + num3;
    }
    else if(num2 > num1 && num2 > num3 && num3 > num1 || num3 > num1 && num3 > num2 && num2 > num1)
    {
        sum = num2 + num3;
    }
    
    printf("%d",sum);
    return 0;
}
