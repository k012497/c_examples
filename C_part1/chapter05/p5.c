#include <stdio.h>

int main ()
{
    int num1= 0;
    int first_digit, second_digit=0;

    printf("정수를 입력하시오: ");
    scanf("%d", &num1);

    first_digit = num1 / 10;
    second_digit = num1 % 10;

    printf("십의 자리: %d\n", first_digit);
    printf("일의 자리: %d\n", second_digit);

    return 0;
}