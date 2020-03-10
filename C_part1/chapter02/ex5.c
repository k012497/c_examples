#include <stdio.h>

int main ()
{
    int num1 = 0;
    int num2 = 0;

    printf("두 정수를 입력하세요 : ");
    scanf("%d %d", &num1, &num2);

    printf("합 : %d + %d = %d\n", num1, num2, num1 + num2);
    printf("차 : %d - %d = %d\n", num1, num2, num1 - num2);

    return 0;
}