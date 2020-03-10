#include <stdio.h>
#include <string.h>
#define SIZE 5

int array_equal(int a[], int b[], int size);

int main()
{
    int a[SIZE] = {0,};
    int b[SIZE] = {0,};
    int i = 0, result = 0;
    

    for ( i = 0; i < SIZE ; i++)
    {
        printf("a[%d]", i);
        scanf("%d", &a[i]);
    }

        for ( i = 0; i < SIZE ; i++)
    {
        printf("b[%d]", i);
        scanf("%d", &b[i]);
    }
    
    result = array_equal(a, b, sizeof(a)/sizeof(a[0]));
    printf("두 배열이 같으면 1 다르면 0 : %d\n", result);

    return 0;
}

int array_equal(int a[], int b[], int size)
{
    int flag = 1, i = 0;
    for ( i = 0; i < size; i++)
    {
        if (a[i] != b[i])
        flag = 0;
    }

    if (flag == 0) return 0;
    else return 1;
}
