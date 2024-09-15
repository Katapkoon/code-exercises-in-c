#include <stdio.h>
#include <windows.h>
#include <time.h>
int main()
{
    int ans;
    scanf("%d",&ans);

    srand(time(0));

    int arr[10];
    int i = 0;
    int a = 0;
    while(i < 10)
    {
        arr[i] = rand() % 10;
        if(arr[i] == ans)
        {
            ++a;
        }
        ++i;
    }
    if(a >= 1)
    {
        printf("yes");
    }
    else if(a == 0)
    {
        printf("no");
    }
    return 0;
    /*for(i = 0; i< 10;++i)
    {
        printf("%d ",arr[i]);
    }*/
}
