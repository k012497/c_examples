#include <stdio.h>

int main()
{
    int array[9][9]={0,};
    int i = 0, j = 0;

    for ( i = 0 ; i < 9; i++)
    {
        for ( j = 0 ; j < 9; j++)
        {
            array[i][j] = (i + 1) * (j + 1);
        }
    }

    for ( i = 1 ; i < 9; i++)
    {
        for ( j = 0 ; j < 9; j++)
        {
            printf("%d * %d = %d\n", i + 1, j + 1, array[i][j]);
        }
    }
    
    return 0;
}
