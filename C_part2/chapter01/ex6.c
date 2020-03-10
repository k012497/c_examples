#include <stdio.h>

int main()
{
    int i =0;

    char array1[5] = {'A', 'B', 'C', 'D', 'E'};
    int array2[5] = {10, 20, 30, 40, 50};
    double array3[5] = {10.1, 20.2, 30.3, 40.4, 50.5};

    for ( i = 0; i < 5; i++)
    {
        printf("값 : %c, 주소 : %x \n", array1[i], &array1[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        printf("값 : %d, 주소 : %x \n", array2[i], &array2[i]);
    }

    for ( i = 0; i < 5; i++)
    {
        printf("값 : %lf, 주소 : %x \n", array3[i], &array3[i]);
    }
    
    return 0;
}
