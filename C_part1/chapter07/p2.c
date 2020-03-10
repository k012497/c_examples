#include <stdio.h>

int main()
{
    int num = 0, sum = 0;
    
    while(scanf("%d", &num)!= EOF)
    {
        sum += num;        
    }

    printf("정수의 합은 %d입니다.\n", sum);

    return 0;
}
