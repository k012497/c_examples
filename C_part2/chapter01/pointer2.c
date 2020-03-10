#include <stdio.h>

int add(int (*a)[2]);

int main()
{
    int a[2][2] = {10,20,30,40};
    int i = 0, j = 0, sum = 0;

    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf("a[%d][%d] = %d", i, j, a[i][j]);
        }
        printf("\n");
    }

    sum = add(a);
    printf("전체 2차원 배열의 합계는 %d \n", sum);
    return 0;
}

int add(int (*a)[2]) //8바이트짜리 a를 받을 수 있는 포인터 변수. (*a)[2][2]는 3차원 배열 int a[2][2][2]의 번지상수
{
    int i = 0, j = 0, sum = 0;
    for ( i = 0; i < 2; i++)
    {
        for ( j = 0; j < 2; j++)
        {
            printf(" add function : a[%d][%d] = %d", i, j, a[i][j]);
            sum = sum + a[i][j];
        }
        printf("\n");
    }
    return sum;
}