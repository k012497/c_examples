#include <stdio.h>

int main()
{
    double num1, num2 = 0.0;
    double sum, sub, mul, share= 0.0;

    printf("2개의 실수를 입력하시오: ");
    scanf("%lf %lf", &num1, &num2);

    sum = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    share = num1 / num2;

    printf("%lf %lf %lf %lf\n", sum, sub, mul, share);
}