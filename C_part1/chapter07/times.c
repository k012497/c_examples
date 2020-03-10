#include <stdio.h>

int main()
{
    int num = 0, i = 0;

    for (;1;)
    {
        printf("2~9단 중 출력할 단 입력");
        scanf("%d", &num);
        if (num>1 && num<10) break;
    }

    for ( i = 1 ; i <10 ; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }
    
    return 0;
}
