#include <stdio.h>
 
int main ()
 {
    float num1, num2, num3 = 0.0f;
    float sum, avg = 0.0f;

    printf("실수를 입력하시오: ");
    scanf("%f", &num1);

    printf("실수를 입력하시오: ");
    scanf("%f", &num2);

    printf("실수를 입력하시오: ");
    scanf("%f", &num3);

    sum = num1 + num2 + num3;
    avg = sum / 3.0f;

    printf("합계는 %f이고 평균값은 %f입니다.\n", sum, avg);
    return 0;
 }