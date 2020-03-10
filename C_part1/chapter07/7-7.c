#include <stdio.h>

int main()
{
    int i = 0, sum = 0;

    for (i = 1 ; i <= 10 ; i++)
    {
        sum = sum + i;
        printf("i = %d, sum = %d \n", i, sum);
    }

    printf("총 합계는 %d\n", sum);
    return 0;
}
