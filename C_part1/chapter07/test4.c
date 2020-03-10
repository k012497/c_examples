#include <stdio.h>

int main()
{
    int num = 0, i = 0;

    do
    {
        printf("2~9단 중 출력할 구구단 : ");
        scanf("%d", &num);
    } while (num<2 && num >9);

    for(i = 1; i < 10 ; i++)
    {
        printf("%d * %d = %d입니다.\n", num, i , num * i);
    }

    return 0;
}
