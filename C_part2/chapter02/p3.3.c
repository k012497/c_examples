/*
이 문제 정복하기 @@@
*/

#include <stdio.h>
#include <unistd.h>
#include <time.h>

void random (int a[], int SIZE, int max, int min);
void put_array (int a[], int SIZE);
int compare(int a[], int b[], int SIZE);

int main ()
{
    int a[5] = {0,};
    int b[5] = {0,};
    int i = 0, flag = 1;
    const int SIZE = sizeof(a)/sizeof(a[0]);

    //1. 배열 랜덤으로 설정
    random(a, SIZE, 5, 1);
    usleep(1000000);
    random(b, SIZE, 5, 1);

    //2.랜덤 배열값 출력
    put_array(a, SIZE);
    put_array(b, SIZE);
    
    //3.비교 연산을 진행
    flag = compare(a, b, SIZE);

    //4. 비교 결과값에 따라 출력
    switch (flag)
    {
    case 1:
        puts("첫 번째 배열이 더 큽니다.");
        break;

    case 0:
        puts("두 배열은 같습니다. ");
        break;

    case -1:
        puts("두 번째 배열이 더 큽니다.");
        break;
    
    default:
        puts("다시 확인해 주세요");
        break;
    }

    return 0;
}

void random (int a[], int SIZE, int max, int min)
{
    int i = 0;
    srand(time(NULL));

    for ( i = 0; i < SIZE; i++)
    {
        a[i] = rand()%(max - min + 1) + min;
    }   
    return;
}

void put_array (int a[], int SIZE)
{
    int i = 0;

    for ( i = 0; i < SIZE ; i++)
    {
        printf("%5d ", a[i]);
    }
    printf("\n");

    return ;
}

int compare(int a[], int b[], int size)
{
    int flag = 0, i = 0;

    for ( i = 0; i < size; i++)
    {
        if (a[i] - b[i] < 0) // 첫 자리에서 이미 작으면 작은 거 결정 땅땅땅
        {
            flag = -1;
            break; //찾는 순간 나가줘야 함
        } 
        else if (a[i] - b[i]> 0)// 5000은 4999보다 큼. 즉 첫 자리에서 이미 크면 큰 거 결정 땅땅땅
        {
            flag = 1;
            break; //찾는 순간 나가줘야 함
        }
    }

    return flag;
}