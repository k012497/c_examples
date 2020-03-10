#include <stdio.h>

int main()
{
    int i = 0, count = 0;
    float num = 0.0f, power = 1.0f;

    printf("실수의 값을 입력하시오 : ");
    scanf("%f", &num);
    printf("거듭제곱 횟수를 입력하시오 : ");
    scanf("%d", &count);

    for(i = 0 ; i < count ; i++)
    {
        power = power * num;
    }

    printf("결과 값은 %f \n", power);

    return 0;
}
