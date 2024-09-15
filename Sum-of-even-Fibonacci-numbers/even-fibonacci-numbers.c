#include <stdio.h>
int main()
{
    int sum = 0,i;
    int t1= 1,t2=2; //term1 and term2
    int nextTerm = t1 + t2;
    for(i = 3; i <= 33; i++) //term1 to term 33 
    {
        t1 = t2;
        t2 = nextTerm;
        nextTerm = t1 + t2;
        if(nextTerm % 2 == 0) // Check if the next term is an even number.
        {
            sum +=nextTerm;
        }
    }
    sum += 2;
    printf("%d",sum);
}