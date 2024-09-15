#include <stdio.h>
int main()
{
    float num1,num2;
    char op;
    printf("Please input the first number : ");
    scanf("%f",&num1);
    printf("Please input the second number : ");
    scanf("%f",&num2);
    printf("Please input an operator : ");
    scanf(" %c",&op);
    
    switch (op)
    {
    case '+' :
        printf("%f",(float)num1+num2);
        break;
    case '-' :
        printf("%f",(float)num1-num2);
        break;
    case '*' :
        printf("%f",(float)num1*num2);
        break;
    case '/' :
        
        printf("%f",(float)num1/num2);
        break;
    default:
        printf("Error");
    }

    return 0;
}
