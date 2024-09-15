#include <stdio.h>
void grading(int score)
{
    if(score >= 80)
    {
        printf("A");
    }
    else if(score >= 75)
    {
        printf("B+");
    }
    else if(score >= 70)
    {
        printf("B");
    }
    else if(score >= 65)
    {
        printf("C+");
    }
    else if(score >= 60)
    {
        printf("C");
    }
    else if(score >= 55)
    {
        printf("D+");
    }
    else if(score >= 50)
    {
        printf("D");
    }
    else if(score < 50)
    {
        printf("F");
    }
}
int main()
{
    int mid,final,work,total;
    scanf("%d",&work);
    scanf("%d",&mid);
    scanf("%d",&final);
    total = mid + final + work;
    grading(total);
}