#include <stdio.h>

int main()
{
    int num = 0, i = 0, flag = 0;

    for (;1;)
    {
        do
        {
            printf("막대의 높이 1~50 (종료:-1) : ");
            scanf("%d", &num);
            if(num == -1) 
            {
                flag = 1;
                break;
            }
        } while (num < 1 || num > 50);
    
        if(flag == 1) break;

        for ( i = 0; i < num; i++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
