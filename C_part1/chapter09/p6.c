#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void b_rand(void);

int main()
{
    int i = 0;
    srand(time(NULL));

    for ( i = 0; i < 5; i++)
    {
        b_rand();
    }
    printf("\n");
    
    return 0;
}


void b_rand(void)
{
    printf("%d ", rand()%(1-0+1)+0); 
    return ;
}