#include <stdio.h>

int main()
{
    int i = 0, j = 0, a = 1;

    for (i = 1; i < 6; i++)
    {
        for (j = 0 ; j < i ; j++)
        {
            printf("*");
        }

        for (j = 0 ; j < 10 - (2 * i) ; j++)
        {
            printf("⠀");
        }
        
        for ( j = 0; j < i; j++)
        {
            printf("*");
        }

        printf("\n");
    }

    for (i = 1; i < 6; i++)
    {
        for (j = 5 ; j > i ; j--)
        {
            printf("*");
        }

        for (j = 0 ; j <= 2 * i - 1 ; j++)
        {
            printf("⠀");
        }
        
        for ( j = 5; j > i ; j--)
        {
            printf("*");
        }

        printf("\n");
    }
    
    return 0;
}
