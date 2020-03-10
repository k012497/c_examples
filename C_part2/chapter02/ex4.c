#include <stdio.h>

int main()
{
    int array1[4][3] = {23, 75, 85, 12, 77, 51, 25, 66, 30, 19, 90, 88};
    int array2[4][3] = {11, 15, 47, 74, 85, 69, 57, 86, 28, 90, 22, 33};
    int add[4][3] = {0,};
    int sub[4][3] = {0,};
    
    int i = 0, j = 0;

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            add[i][j] = array1[i][j] + array2[i][j];
            sub[i][j] = array1[i][j] - array2[i][j];
        }    
    }

    for ( i = 0; i < 4; i++)//배열찍어주는 함수 만들기
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ", add[i][j]);
        }
        printf("\n");
    }

    printf("---------------\n");
    
    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ", sub[i][j]);
        }
        printf("\n");
    }

    return 0;
}
