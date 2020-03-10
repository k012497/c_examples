#include <stdio.h>

void input (void);
void column_cal (void);

int i = 0, total= 0;
int array1[5] = {0,};
int array2[5] = {0,};
int array3[5] = {0,};
int rowSum[5] = {0,};
int columnSum[5] = {0,};

int main()
{
    input(); //값을 입력 받는다

    for ( i = 0; i < 5; i++)
    {
        printf("%5d ", array1[i]);
        rowSum[0] += array1[i];
    }
    printf("%5d\n", rowSum[0]);

    for ( i = 0; i < 5; i++)
    {
        printf("%5d ", array2[i]);
        rowSum[1] += array2[i];
    }
    printf("%5d\n", rowSum[1]);

    for ( i = 0; i < 5; i++)
    {
        printf("%5d ", array3[i]);
        rowSum[2] += array3[i];
    }
    printf("%5d\n", rowSum[2]);

    column_cal();

    for ( i = 0; i < 5; i++) //세로 합 출력
    {
        printf("%5d ", columnSum[i]);
    }

    printf("%5d\n", rowSum[0] + rowSum[1] + rowSum[2]); //모든 수의 합 출력
    
    return 0;
}

void input (void)
{
    
    for ( i = 0; i < 5; i++) //값을 입력 받는다.1
    {
        printf("array1[%d] :", i);
        scanf("%d", &array1[i]);
    }

    for ( i = 0; i < 5; i++) //값을 입력 받는다.2
    {
        printf("array2[%d] :", i);
        scanf("%d", &array2[i]);
    }

    for ( i = 0; i < 5; i++) //값을 입력 받는다.3
    {
        printf("array3[%d] :", i);
        scanf("%d", &array3[i]);
    }
}

void column_cal (void)
{
    for ( i = 0; i < 5; i++) //세로합
    {
        columnSum[i] = array1[i] + array2[i] + array3[i];
    }
}

