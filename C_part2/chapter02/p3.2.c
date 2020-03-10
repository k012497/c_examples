/*
교수님이 풀어주신 거
 */

#include <stdio.h>
#include <time.h>
//#include <stdlib.h> //srand 
#include <unistd.h> //usleep

void random(int array[ ], int size, int max, int min);
void array_print(int array[ ], int size);
int compare(int a[], int b[], int size);

int main (void)
{
    int a[5] = {0,};
    int b[5] = {0,};
    int i = 0, flag = 1;
    const int SIZE = sizeof(a)/sizeof(a[0]);

    random(a, SIZE, 10, 1); //1부터 10까지 랜덤으로 배열값 받기
    usleep(1000000);
    random(b, SIZE, 10, 1); 

    array_print(a,SIZE); //배열출력
    array_print(b,SIZE);

    flag = compare(a, b, SIZE); //비교해주는 함수

    //비교 결과값에 따라 출력
    switch(flag)
    {
    case 0 : puts("두 개의 배열이 같습니다."); break;
    case 1 : puts("첫 번째 배열이 큽니다."); break;
    case -1 : puts("두 번째 배열이 큽니다."); break;
    default : puts("다시 확인해주세요.");
    }

    return 0;
}
//번지만 전달하는 것이기 때문에 void로 한다.
void random(int array[ ], int size, int max, int min) 
{
    int i=0;
    srand(time(NULL));

    for(i = 0 ; i < size ; i++ )
    {
       array[i] = rand()%(max - min + 1) + min;
    }

    return ;
}

void array_print(int array[ ], int size)
{
    int i=0;
    for(i=0;i<size;i++) printf("%5d", array[i]);
    printf("\n");
    return;
}

int compare(int a[], int b[], int size)
{
    int i = 0, flag = 0;
    for(int i = 0 ; i < 5 ; i++)
    {
        if (a[i] -b[i] > 0)
        {
            flag = 1;
            break;
        }
        else if (a[i]- b[i] < 0)
        {
            flag = -1;
            break;
        }
    }
    return flag;
}
