#include <stdio.h>
#include <time.h>
#include <math.h>

double standard_deviation (double avg, double *arr, int len);

int main()
{
    double array[10] = {0};
    int i = 0;
    double sum = 0.0, avg = 0.0, result = 0.0;
    srand(time(NULL));

    for ( i = 0; i < 10; i++)
    {
        array[i] = (double)(rand()%(100-0+1)+0); //자료 범위 0~100으로 설정
        sum += array[i];
    }
    
    avg = sum / 10.0;
    printf("평균값은 %lf, ", avg);
    result = standard_deviation(avg, array, sizeof(array)/sizeof(array[0]));
    printf("표준편차값은 %lf\n", result);

    return 0;
}

double standard_deviation (double avg, double *arr, int len)
{
    int i = 0;
    double sum = 0.0;

    for ( i = 0; i < len; i++)
    {
        sum += (avg - arr[i]) * (avg - arr[i]);
    }
    
    return sqrt(sum/(float)len);
}

