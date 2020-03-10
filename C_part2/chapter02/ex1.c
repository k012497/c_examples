#include <stdio.h>

int main()
{
    int array1[2][4] = {1,2,3,4,5,6,7,8};
    int array2[4][2] = {0,};
    int i = 0, j = 0;

    for ( i = 0; i < 4; i++) //배열 1을 통해 배열 2[][0]를 채움
    {
        array2[i][0] = array1[1][i];
    }

    for ( i = 0; i < 4; i++) //배열 1을 통해 배열 2[][1]를 채움
    {
        array2[i][1] = array1[0][i];
    }
    
    for ( i = 0; i < 4; i++) //출력
    {
        for ( j = 0; j < 2; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
