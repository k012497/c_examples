#include <stdio.h>
//#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));
    int array[10]={0,};
    int i = 0, max = 0, min = 100;


    for ( i = 0; i < 10; i++)
    {
        array[i]= rand()%100; //난수의 범위는 0~100

        if (max < array[i])
        {
            max = array[i];
        }

        if (min > array[i])
        {
            min = array[i];
        }
    }

    printf("배열 내 최대값은 %d, 최소값은 %d \n", max, min);
    
    return 0;
}
