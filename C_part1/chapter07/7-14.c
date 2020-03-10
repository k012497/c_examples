#include <stdio.h>

int main()
{
    int i = 0, num = 0, factorial = 1;

    for(;1;)
    {
        printf("1~10 중 팩토리얼 계산할 수 입력 : ");
        scanf("%d", &num);
        if (num>=1 && num<=10) break;
    }
    
    for (i = 1; i <= num; i++)
    {
        factorial = factorial * i;
    }
    
    printf("%d! = %d \n", num, factorial);

    return 0;
}
