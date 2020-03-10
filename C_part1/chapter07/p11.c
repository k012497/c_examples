#include <stdio.h>

int main()
{
    int num = 0, square_sum = 0, i = 0;

    printf("n의 값을 입력하시오 : ");
    scanf("%d", &num);

    for(i = 1 ; i <= num ; i++)
    {
        square_sum += (i * i);
    }

    printf("계산값은 %d입니다.\n", square_sum);

    return 0;
}
