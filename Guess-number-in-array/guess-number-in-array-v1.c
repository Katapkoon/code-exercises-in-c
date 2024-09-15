#include <stdio.h>
#include <windows.h>
#include <time.h>
int main()
{
    int ans;
    scanf("%d",&ans);

    srand(time(0));

    int arr[10];
    for(int i = 0; i < 10;++i)
    {
        arr[i] = rand() % 10;
        if(arr[i] == ans)
        {
            printf("yes");
            return 0;
        }
    }
    printf("no");
    /*for(int i = 0; i< 10;++i)
    {
        printf("%d ",arr[i]);
    }*/
    return 0;
}
