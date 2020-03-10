#include <stdio.h>

int main()
{
    int i = 0, j = 0;
    int floor = 0, unit = 0, sum = 0;
    int array[3][3] = {0,};

    for ( i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            printf("%d층 %d호의 가족은 몇 명입니까? ", i + 1, j + 1);
            scanf("%d", &array[i][j]);
        }
    }

    for ( i = 0; i < 3; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            sum += array[i][j];
        }
    }

    printf("열혈아파트 총 주민 수는 %d명 입니다.\n", sum);
    
    return 0;
}
