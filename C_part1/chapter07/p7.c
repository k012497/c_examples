#include <stdio.h>

int main()
{
    int num = 0, i = 0, count = 0;
    
    for(num = 2 ; num <= 100 ; num++)
    {
        for (i = 1 ; i <= num; i++)
        {
            if(num % i == 0)
            {
                count++;
            }
        }

        if(count == 2)
        { 
            printf("%d ", num);
        }
        count = 0;

    }
    printf("\n");
    
    return 0;
}