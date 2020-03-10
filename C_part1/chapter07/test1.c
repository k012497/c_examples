#include <stdio.h>

int main()
{
    int num = 0, i = 0, count = 0;

    printf("1~10 양의 정수 입력 : ");
    scanf("%d", &num);

    printf("%d의 배수: ", num);

    for ( i = 1; i < 100; i++)
    {
        if(num * i >= 100) break;
        printf("%d ", num * i);
        count++;
    }
    
    printf("\n%d의 배수의 개수 : %d개\n", num, count);
    return 0;
}
