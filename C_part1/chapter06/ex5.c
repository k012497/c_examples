#include <stdio.h>

int main()
{
    int input1 = 0, input2 = 0;
    float result = 0.0f;

    printf("input 2 numbers = ");
    scanf("%d %d", &input1, &input2);

    for (;(input1 < 1 || input1 > 100) || (input2 < 1 || input2 > 100) ;)
        {
            printf("잘못된 값. 다시 입력 : ");
            scanf("%d %d", &input1, &input2);
        }
/*
printf("input number1 = ");
    scanf("%d", &input1);
    for (;input1 < 1 || input1 > 100 ;)
        {
            printf("잘못된 값. 다시 입력 : ");
            scanf("%d", &input1);
        }

    printf("input number2 = ");
    scanf("%d", &input2);
    for (;input2 < 1 || input2 > 100 ;)
        {
            printf("잘못된 값. 다시 입력 : ");
            scanf("%d", &input2);
        }
 */
    

    result = (float)input1 / (float)input2;
    printf("나눗셈 결과 = %f \n", result);

    return 0;
}
