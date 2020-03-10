#include <stdio.h>

int main()
{
    int num = 0;

    do
    {
        printf("1부터 10 중 하나를 선택하세요");
        scanf("%d", &num);
    } while (num < 1 || num > 10);

    printf("당신이 선택한 숫자는 %d\n", num);
    
    return 0;
}
