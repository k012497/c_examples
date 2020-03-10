#include <stdio.h>

int main()
{
    float num1, cal = 0.0f;
    

    printf("실수를 입력하시오: ");
    scanf("%f", &num1);

    cal = (3 * num1 * num1) + (7 * num1) +11;

    printf("다항식의 값은 %f\n", cal);
    return 0;
}