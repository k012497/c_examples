#include <stdio.h>

int main()
{
    int num = 0, sum = 0, count = 0;

    for ( ; ; )
    {
        printf("정수 입력 : ");
        scanf("%d", &num);
        sum += num;

        if(num == 0) break;

        count++;
    }
    
    printf("입력한 정수 %d개의 합은 %d\n", count, sum);
    
    return 0;
}
