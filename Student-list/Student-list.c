#include <stdio.h>
#include <string.h>
int main()
{
    char name1[100];
    char surename1[100];
    char id1[100];
    char name2[100];
    char surename2[100];
    char id2[100];
    char name3[100];
    char surename3[100];
    char id3[100];
    int name_totChar1 = 0;
    int name_totChar2 = 0;
    int name_totChar3 = 0;
    int surename_totChar1 = 0;
    int surename_totChar2 = 0;
    int surename_totChar3 = 0;
    int id_totChar1 = 0;
    int id_totChar2 = 0;
    int id_totChar3 = 0;
    

    printf("Please input name 1 : ");
    scanf("%s",&name1);
    printf("Please input surename 1 : ");
    scanf("%s",&surename1);
    printf("Please input ID 1 : ");
    scanf("%s",&id1);
    printf("\nPlease input name 2 : ");
    scanf("%s",&name2);
    printf("Please input surename 2 : ");
    scanf("%s",&surename2);
    printf("Please input ID 2 : ");
    scanf("%s",&id2);
    printf("\nPlease input name 3 : ");
    scanf("%s",&name3);
    printf("Please input surename 3 : ");
    scanf("%s",&surename3);
    printf("Please input ID 3 : ");
    scanf("%s",&id3);

    for(int i = 0; name1[i] != '\0'; i++)
    {
        name_totChar1++;
    }
    for(int i = 0; name2[i] != '\0'; i++)
    {
        name_totChar2++;
    }
    for(int i = 0; name3[i] != '\0'; i++)
    {
        name_totChar3++;
    }
    printf("%d\n",name_totChar1);
    
    for(int i = 0; surename1[i] != '\0'; i++)
    {
        surename_totChar1++;
    }
    for(int i = 0; surename2[i] != '\0'; i++)
    {
        surename_totChar2++;
    }
    for(int i = 0; surename3[i] != '\0'; i++)
    {
        surename_totChar3++;
    }
    printf("%d\n",surename_totChar1);  

    for(int i = 0; id1[i] != '\0'; i++)
    {
        id_totChar1++;
    }
    for(int i = 0; id2[i] != '\0'; i++)
    {
        id_totChar2++;
    }
    for(int i = 0; id3[i] != '\0'; i++)
    {
        id_totChar3++;
    }
    printf("%d\n",id_totChar1);
    
    for(int i = 0; i < 4; i++)
    {
        printf("+");
        for(int i = 0; i < 30; i++)
        {
            printf("-");
        }
        if(i == 2)
            {
                printf("+\n");
                break;
            }
    }
    printf("|");
    printf("%s",name1);
    for(int i = 0; i< 30 - name_totChar1; i++)
    {
        printf(" ");
    }

    printf("|");
    printf("%s",surename1);
    for(int i = 0; i< 30 - surename_totChar1; i++)
    {
        printf(" ");
    }

    printf("|");
    for(int i = 0;i< 30 - id_totChar1; i++)
    {
        printf(" ");
    }
    printf("%s", id1);
    printf("|");
    printf("\n");

    
    
    
    
    printf("|");
    printf("%s",name2);
    for(int i = 0; i< 30 - name_totChar2; i++)
    {
        printf(" ");
    }

    printf("|");
    printf("%s",surename2);
    for(int i = 0; i< 30 - surename_totChar2; i++)
    {
        printf(" ");
    }

    printf("|");
    for(int i = 0;i< 30 - id_totChar2; i++)
    {
        printf(" ");
    }
    printf("%s", id2);
    printf("|");
    printf("\n");




    printf("|");
    printf("%s",name3);
    for(int i = 0; i< 30 - name_totChar3; i++)
    {
        printf(" ");
    }

    printf("|");
    printf("%s",surename3);
    for(int i = 0; i< 30 - surename_totChar3; i++)
    {
        printf(" ");
    }

    printf("|");
    for(int i = 0;i< 30 - id_totChar3; i++)
    {
        printf(" ");
    }
    printf("%s", id3);
    printf("|");
    printf("\n");



    for(int i = 0; i < 4; i++)
    {
        printf("+");
        for(int i = 0; i < 30; i++)
        {
            printf("-");
        }
        if(i == 2)
            {
                printf("+\n");
                break;
            }
    }
}