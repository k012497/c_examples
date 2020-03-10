/*
난수로 배열값 받기 (1~55)
비교는 세 가지로 나오게 하기. 
다 같으면 0, 앞에가 크면 1, 뒤에가 크면 -1하고 나가기
 */

#include <stdio.h>
#include <time.h>
#include <unistd.h>

#define SIZE 5
#define MAX 55
#define MIN 1

void random (int a[], int size, int max, int min);
int compare (int a[], int b[], int size);
void print_array (int a[], int size);

int main()
{
    int flag = 1;
    int a[SIZE] = {0,};
    int b[SIZE] = {0,};

    random(a, SIZE, MAX, MIN);
    usleep(1000000);
    random(b, SIZE, MAX, MIN);

    flag = compare(a, b, SIZE);

    print_array (a, SIZE);
    print_array (b, SIZE);

    switch (flag)
    {
    case 1:
        printf("첫 번째 배열이 더 큽니다\n");
        break;

    case 0:
        printf("두 배열이 같습니다\n");
        break;

    case -1:
        printf("두 번째 배열이 더 큽니다\n");
        break;
    
    default:
        printf("다시 확인하세요\n");
        break;
    }


    return 0;
}

void random (int a[], int size, int max, int min)
{
    srand(time(NULL));
    int i = 0;
    for ( i = 0; i < size; i++)
    {
        a[i] = rand()%(max-min+1)+min;
    }
    return;
}

int compare (int a[], int b[], int size)
{
    int i = 0, flag = 0;
    for ( i = 0; i < size; i++)
    {
        if ( a[i] > b[i] )
        {
            flag = 1;
            break;
        }
        else if ( a[i] < b[i] )
        {
            flag = -1;
            break;
        }
    }
    return flag;
}

void print_array (int a[], int size)
{
    int i = 0;
    for (i = 0; i < size; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    
    return ;
}