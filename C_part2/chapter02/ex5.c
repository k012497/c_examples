#include <stdio.h>

int main()
{
    int array[2][3] = {1, 2, 3, 4, 5, 6};
    int i = 0, j = 0;

    for ( i = 0; i < 2; i++)
    {
        for (j = 0; j < 3; j++)
        {
            //printf("값 %d, 주소 %x ", *(array[i]+j), &array[i][j]);
            //printf("값 %d, 주소 %x ", *(*(array+i)+j), &*(*(array+i)+j));
            printf("값 %d, 주소 %x ", *(*(array+i)+j), *(array+i)+j);
        }
        printf("\n");
    }
    
    return 0;
}
