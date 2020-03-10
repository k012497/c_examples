/*
교수님이 풀어주신 거
*/

#include <stdio.h>
#include <time.h>

void random(int array[], int SIZE, int max, int min);
void print_array(int array[], int SIZE);
void array_copy(int array1[], int array2[], int SIZE);

int main()
{
    int a[5] = {0,};
    int b[5] = {0,};
    const int SIZE = sizeof(a)/sizeof(a[0]);

    random(a, SIZE, 100, 50); //1. random 함수- 정수 배열에 랜덤값 입력받기

    array_copy(a, b, SIZE); //2. array_copy 함수 -  b[0] = a[0] ... b[n-1] = a[n-1]
    print_array(a, SIZE);
    print_array(b, SIZE);

    return 0;
}

void random(int array[], int SIZE, int max, int min)
{
    int i = 0;
    srand(time(NULL));

    for ( i = 0; i < SIZE; i++)
    {
        array[i] = rand()%(max - min + 1) + min;
    }
    return ;
}

void print_array(int array[], int SIZE)
{
    int i = 0;
    for ( i = 0; i < SIZE; i++) printf("%5d", array[i]);
    printf("\n");
    return ;
}

void array_copy(int array1[], int array2[], int SIZE)
{
    int i = 0;

    for ( i = 0; i < SIZE; i++)
    {
        array2[i] = array1[i];
    }
    return ;
}