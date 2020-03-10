#include <stdio.h>

int main()
{
    int i = 0, sum = 0;
    int array[3] = {0,};

    for (i = 0; i < 3; i++)
    {
        printf("array[%d] = ", i + 1);
        scanf("%d", &array[i]);
    }

    for ( i = 0 ; i < 3 ; i++)
    {
        sum += array[i];
    }

    printf("총점은 %d이고 평균은 %.2lf입니다.\n", sum, (double)sum/3.0);
    
    return 0;
}
