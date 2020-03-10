#include <stdio.h>

int main()
{
    int num1 = 10;
    int num2 = 3;

    double result;

    result = num1 / num2; 
    printf("결과 : %lf \n", result);

    result = (double)num1 / num2;
    printf("결과 : %lf \n", result);

    result = num1 / (double)num2;
    printf("결과 : %lf \n", result);

    result = (double)num1 / (double)num2;
    printf("결과 : %lf \n", result);

    return 0;
}
