#include <stdio.h>
#include <unistd.h>

int main()
{
    int i = 0, j = 0, k = 0;

    for ( i = 0; i < 6; i++)
    {
        for ( j = 0; j < 5 - i; j++)
        {
            printf("⠀");
        }

        for ( k = 0; k < ( 2 * i - 1); k++)
        {
            usleep(100000);
            printf("*");
        }
        
        printf("\n");
        
    }
    

    return 0;
}
