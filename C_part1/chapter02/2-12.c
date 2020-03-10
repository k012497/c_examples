#include <stdio.h>

int main()
{
    int num1, num2, num3 = 0;

    printf("10진수 정수 1개 입력 : ");
    scanf("%d", &num1);
    printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", num1, num1, num1);

    printf("16진수 정수 1개 입력 : ");
    scanf("%x", &num2);
    printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", num2, num2, num2);

    printf("8진수 정수 1개 입력 : ");
    scanf("%o", &num3);
    printf("10진수 : %d, 16진수 : %x, 8진수 : %o\n", num3, num3, num3);

    return 0;
}