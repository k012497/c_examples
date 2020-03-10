#include <stdio.h>

int main()
{
    int num = 0, i = 0;

    for(;1;)
    {
        printf("1~9 중 숫자 하나를 입력하세요 : ");
        scanf("%d", &num);
        if(num >= 1 && num <= 9) break;
    }

    for ( i = 0; i < 10; i++)
    {
        printf("%d * %d = %d입니다.\n", num, i, num * i);
    }
    
    return 0;
}
