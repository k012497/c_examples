#include <stdio.h>

int main()
{
    int num = 0, factorial = 1, i = 0;

    do
    {
        printf("팩토리얼 연산을 할 수 입력 : ");
        scanf("%d", &num);
    } while (num<1 || num >20);

    for ( i = num; i >= 1; i--)
    {
        factorial *= i;
    }
    
    printf("%d의 팩토리얼 연산 결과는 %d입니다.\n", num, factorial);
    
    return 0;
}
