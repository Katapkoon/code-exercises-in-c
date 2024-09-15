#include <stdio.h>
int main()
{
    char cur,letter; // cur = current char
    char *p,str[50];
    scanf("%s",str);
    p = str;
    while(*p != '\0')
    {
        // n = non-char, c = char;
        if(!((*p >= 'a' && *p <= 'z') || (*p >= 'A' && *p <= 'Z' ))) 
        {
            cur = 'n';
        }
        else
        {
            cur = 'c';
        }
        //
        if(cur == 'n')
        {
            
        }
        else
        {
            if(*p >= 'a' && *p <= 'z')
            {
                letter = *p - 32;
                printf("%c",letter);
            }
            else if(*p >= 'A' && *p <= 'Z')
            {
                letter = *p + 32;
                printf("%c",letter);
            }
        }
        p++;
    }
    return 0;
}