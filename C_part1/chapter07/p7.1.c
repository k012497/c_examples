#include <stdio.h>

int main()
{
    int i = 0, j = 0, value = 0, count = 0;

    for ( i = 2; i <= 100; i++)
    {
        for ( j = 1 ; j <= i ; j++)
        {
            value = i % j;

            if ( value == 0 )
            {
                count++;
            }  
        }
        if (count == 2)
        {
            printf("%d ", i);
        }
        count = 0;
    }
    
    printf("\n");
    
    return 0;
}
