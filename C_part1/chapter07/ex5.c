#include <stdio.h>

int main()
{
    int num = 0, fatorial = 1, i = 1;

    for(;1;)
    {
        printf("1~20 중 숫자 하나를 입력하세요 : ");
        scanf("%d", &num);
        if(num >= 1 && num <= 20) break;
    }

    for ( i = 1; i <= num; i++)
    {
        fatorial = fatorial * i;
    }

    printf("%d! = %d\n", num, fatorial);
    
    return 0;
}
