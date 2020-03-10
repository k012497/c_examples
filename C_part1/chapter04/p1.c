#include <stdio.h>

int main () 
{
    float num1 = 0.0f;

    printf("실수를 입력하시오: ");
    scanf("%f", &num1);

    printf("실수형식으로는 %f입니다.\n", num1);
    printf("지수형식으로는 %e입니다.\n", num1);


    return 0;
}