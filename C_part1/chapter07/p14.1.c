#include <stdio.h>

int main()
{
    int num = 0;

    do
    {
        printf("네 자리 정수를 입력하세요 ");
        scanf("%d", &num);
    } while(num <= 1000 && num >= 9999);

    printf("%d", num % 10);
    printf("%d", (num / 10) % 10);
    printf("%d", (num / 100) % 10);
    printf("%d", (num / 1000) % 10);
    printf("\n");
    
    return 0;
}
