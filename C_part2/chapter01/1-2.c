#include <stdio.h>

int main()
{
    int i = 0;
    int array1[5] = {90, 80, 70, 60, 50};
    int array2[5] = {90, 80, 70, 60, 50};
    int array3[5] = {90, 80, 70};

    printf("array1 = ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", array1[i]);
    }
    printf("\n");
        
    printf("array2 = ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", array2[i]);
    }
    printf("\n");

    printf("array3 = ");
    for ( i = 0; i < 5; i++)
    {
        printf("%d ", array3[i]);
    }
    printf("\n");

    return 0;
}
