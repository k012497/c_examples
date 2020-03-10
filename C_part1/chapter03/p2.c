#include <stdio.h>

int main ()
{
    int mile = 0 ;
    float meter = 0.0f;

    printf("마일을 입력하시오: ");
    scanf("%d", &mile);

    meter = 1609.0 * mile;

    printf("%d마일은 %f미터 입니다.\n", mile, meter);

    return 0;
}