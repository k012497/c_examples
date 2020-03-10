#include <stdio.h>

int main()
{
    int num = 0;

    for ( ; 1 ; )
    {
        printf("양수만 입력하세요 : ");
        scanf("%d", &num);
        if (num>=0) break;
    }

    printf("당신이 입력한 양수는 %d입니다. \n", num);
    return 0;
}
