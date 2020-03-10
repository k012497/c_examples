#include <stdio.h>

int main()
{
    int num = 0, factorial = 1, i = 0;

    do
    {
        printf("1~5 중에 팩토리얼 연산 할 수 입력");
        scanf("%d", &num);
    }while(num < 1 || num > 5);

    for(i = num ; i >= 1; i--)
    {
        factorial *= i;
    }
    
    printf("%d팩토리얼을 연산한 결과는 %d입니다\n",num ,factorial);

    return 0;
}
