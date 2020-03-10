#include <stdio.h>
#include <time.h>

int main()
{
    int array[3][5] = {0};
    int row_sum[3] = {0};
    int column_sum[5] = {0};
    int i = 0, j = 0;
    srand(time(NULL));

    for ( i = 0; i < 3; i++) //2차원 배열에 난수 입력 받기
    {
        for ( j = 0; j < 5; j++)
        {
            array[i][j]=rand()%(9-0+1)+0;
        }
    }

    for ( i = 0; i < 3; i++) //가로 합 구하기
    {
        for ( j = 0; j < 5; j++)
        {
            row_sum[i] += array[i][j];
        }
    }

    for ( i = 0; i < 5; i++) //세로 합 구하기
    {
        for ( j = 0; j < 3; j++)
        {
            column_sum[i] += array[j][i];
        }
    }

    for ( i = 0; i < 3; i++) //2차원 배열 출력
    {
        for ( j = 0; j < 5; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < 3; i++) //가로합 출력
    {
        printf("가로 %d의 합 = %d\n", i+1, row_sum[i]);
    }

    for ( i = 0; i < 3; i++) //세로합 출력
    {
        printf("세로 %d의 합 = %d\n", i+1, column_sum[i]);   
    }

    return 0;
}
