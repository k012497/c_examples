#include <stdio.h>
#include <time.h>

#define SIZE 10

int main()
{
    int i = 0, max = 0, maxIndex = 0, min = 0, minIndex = 0;
    int a[SIZE] = {0,};

    srand(time(NULL));
    for ( i = 0; i < 100; i++)
    {
        a[rand()%10]++;
    }

    max = a[0];
    min = a[0];

    for ( i = 0; i < SIZE; i++)
    {
        if (max > a[i])
        {
            max = a[i];
            maxIndex = i;
        }
        if (min < a[i])
        {
            min = a[i];
            minIndex = i;
        }
    }
    
    for ( i = 0; i < SIZE; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    printf("가장 많이 생성된 수 : %d (%d번) \n", maxIndex, max);
    printf("가장 적게 생성된 수 : %d (%d번) \n", minIndex, min);
    
    return 0;
}
