#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;
    for ( ; ; )
    {
        printf("두 개의 정수를 입력하세요");
        scanf("%d %d", &num1, &num2);
        if (num1 == num2) break;

        if (num1 > num2)
            printf("큰 수는 %d입니다.\n", num1);
        else
            printf("큰 수는 %d입니다.\n", num1);
        
    }
    
    return 0;
}
