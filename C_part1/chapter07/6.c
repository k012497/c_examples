#include <stdio.h>

int main()
{
    int i = 0, j = 0, a = 1;

    for (i = 1; i < 5; i++)
    {
        for (j = 0 ; j < i ; j++)
        {
            printf("⠀");
        }

        for (j = 0 ; j < (9 - i*2) ; j++)//i가 커질수록 값이 줄어드니까 j가 늘어날 수 있는 거 
        {
            printf("*");
        }
        
        for ( j = 0; j < i; j++)
        {
            printf("⠀");
        }

        printf("\n");
    }

    for (i = 1; i < 5; i++)
    {
        for (j = 5 ; j > i ; j--)
        {
            printf("⠀");
        }

        for (j = 0 ; j < (2 * i) - 1 ; j++)
        {
            printf("*");
        }
        
        for ( j = 6; j > i ; j--)
        {
            printf("⠀");
        }

        printf("\n");
    }
    
    return 0;
}
