#include <stdio.h>

int main ()
{
    int i = 0;
    char array1[6] = {0,};
    char array2[6] = {0,};

    for ( i = 0; i < 3; i++)
    {
        printf("array1[%d] = ", i);
        scanf("%c", &array1[i]);
        while(getchar()!='\n');
    }

    for ( i = 0; i < 6; i++)
    {
        if(i < 3)
        {
            array2[i] = array1[i];
        }
        else
        {
            array2[i] = array1[5-i];
        }
    }

    for ( i = 0; i < 6; i++)
    {
        printf("%c ", array1[i]);
    }

    printf("\n");

    for ( i = 0; i < 6; i++)
    {
        
        printf("%c ", array2[i]);
    }

    printf("\n");
    
    return 0;
}
