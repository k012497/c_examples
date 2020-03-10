#include <stdio.h>
#include <time.h>
#define NUM 100

int main()
{
    int array[10]={0,};
    int i = 0, frequency = 0, frequency_number = 0, num = 0;
    srand(time(NULL));    

    for ( i = 0; i < NUM; i++)
    {
        num =rand()%10;
        array[num]++;

        if (frequency < array[num])
        {
            frequency = array[num];
            frequency_number = num;
        }
    }

    printf("가장 많이 생성된 수는 %d (%d번)\n", frequency_number, frequency);
    
    return 0;
}
