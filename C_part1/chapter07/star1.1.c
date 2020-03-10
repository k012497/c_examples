#include <stdio.h>

int main()
{
    int i = 0, j = 0, k = 0;

    for ( i = 0; i < 6; i++)
    {
        /*
        for ( j = 0; j < (6-i); j++)
        {
            printf("⠀");
        }
         */
        
        
        for ( j = 0; j <= i; j++)
        {
            printf("*");
        }

        printf("\n");
        
    }
    
    return 0;
}
