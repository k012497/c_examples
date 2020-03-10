#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    int reaminder, share = 0;
    
    printf("2개의 정수를 입력하시오 : ");
    scanf("%d %d", &num1, &num2);

    reaminder = num1 % num2;
    share = num1 / num2;

    printf("몫 : %d 나머지 : %d\n", share, reaminder);

    return 0;
}