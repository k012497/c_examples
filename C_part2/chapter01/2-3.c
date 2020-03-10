#include <stdio.h>

int main()
{
    int array1[4][3] = {{1, 2}, {3}, {4}, {5}};
    int array2[4][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}, {10}};

    int i = 0, j = 0;

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ", array1[i][j]);
        }
        printf("\n");
    }

    printf("-------------\n");

    for ( i = 0; i < 4; i++)
    {
        for ( j = 0; j < 3; j++)
        {
            printf("%d ", array2[i][j]);
        }
        printf("\n");
    }
    return 0;
}
