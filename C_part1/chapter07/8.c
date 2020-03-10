#include <stdio.h>

int main()
{
    int num = 0, sum = 0, count = 0;
    for(;;)
    {
        printf("양의 정수 입력 요망 : ");
        scanf("%d", &num);
        if(num == 0) break;

        sum = sum + num;
        count++;
    }

    printf("총덧셈결과는 %d, 카운트는 %d\n", sum, count); 
    return 0;
}
