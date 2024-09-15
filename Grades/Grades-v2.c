#include <stdio.h>
#include <string.h>
int main()
{
    int score;
    scanf("%d",&score);
    char grade[10];
    char gradeA[10] = "A";
    char gradeB_plus[10] = "B+";
    char gradeB[10] = "B";
    char gradeC_plus[10] = "C+";
    char gradeC[10] = "C";
    char gradeD_plus[10] = "D+";
    char gradeD[10] = "D";
    char gradeF[10] = "F";
    if(score < 0)
    {
        printf("Error : Value must be greater than or equal to 0.");
        return 0;
    }
    else if(score > 100)
    {
        printf("Error : Value must be less than or equal to 100.");
        return 0;
    }
    switch (score / 5)
    {
        case 20:     
        case 19: 
        case 18: 
            strcpy(grade, gradeA);   
            printf("%s",grade);
            break;
        case 17:
            strcpy(grade, gradeB_plus);
            printf("%s",grade);
            break;
        case 16:
            strcpy(grade, gradeB);
            printf("%s",grade);
            break;
        case 15:
            strcpy(grade, gradeC_plus);
            printf("%s",grade);
            break;
        case 14:
            strcpy(grade, gradeC);
            printf("%s",grade);
            break;
        case 13:
            strcpy(grade, gradeD_plus);
            printf("%s",grade);
            break;
        case 12:
            strcpy(grade, gradeD);
            printf("%s",grade);
            break;
        case 11:
        case 10:
        case 9:
        case 8:
        case 7:
        case 6:
        case 5:
        case 4:
        case 3:
        case 2:
        case 1:
        case 0:
            strcpy(grade, gradeF);
            printf("%s",grade);
            break;
        default:
            break;
            
    }
    return 0;
}