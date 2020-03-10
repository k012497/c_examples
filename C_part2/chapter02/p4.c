#include <stdio.h>
#include <string.h>
#define SIZE 5

void array_copy(int a[], int b[], int size);

int main()
{
    int a[SIZE] = {0,};
    int b[SIZE] = {0,};
    int i = 0, result = 0;

    for ( i = 0; i < SIZE ; i++) //배열 a입력
    {
        printf("a[%d] : ", i);
        scanf("%d", &a[i]);
    }

    array_copy(a, b, sizeof(a)/sizeof(a[0])); //배열 a를 복사해서 b에 입력

    for ( i = 0; i < SIZE; i++) //잘 입력됐는지 확인
    {
        printf("b[%d] = %d \n", i, b[i]);
    }
    
    return 0;
}

void array_copy(int a[], int b[], int size)
{
    int i = 0;
    for ( i = 0; i < SIZE ; i++) //배열 b에 a의 값 입력
    {
        b[i]=a[i];
    }
    return;
}