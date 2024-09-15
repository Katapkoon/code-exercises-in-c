#include <stdio.h>
#include <ctype.h>
#include <string.h>
int main()
{
    char message[10000];
    int x = 0, y = 0;
    scanf("%s",message);
    for(int i = 0; message[i] != '\0'; i++)
    {
        if(isupper(message[i]))
        {
            x = 1;
        }
        else if(islower(message[i]))
        {
            y = 1;
        }
    }
    if(x == 1 && y == 0)
    {
        printf("All Capital Letter");
    }
    else if(x == 0 && y == 1)
    {
        printf("All Small Letter");
    }
    else if(x == 1 && y == 1)
    {
        printf("Mix");
    }
    return 0;
}