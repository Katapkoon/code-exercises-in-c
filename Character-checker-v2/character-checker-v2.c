#include <stdio.h>
#include <string.h>
int main()
{
    char message[10000];
    int x = 0, y = 0;
    scanf("%s",message);

    for(int i = 1; i <= strlen(message); i++)
    {
        if((message[i] >= 'A' && message[i] <= 'Z'))
        {
            x = 1;
        }
        else if(message[i] >= 'a' && message[i] <= 'z')
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