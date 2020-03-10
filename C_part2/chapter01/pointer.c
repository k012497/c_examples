#include <stdio.h>

int add(int *a);

int main()
{
    int a[4] = {10, 20, 30, 40};
    int i = 0, sum = 0;

    for(i = 0 ; i <= 3 ; i++)
    {
        printf("main : a[%d] = %d \n", i, i[a]);
    }

    sum = add(a);
    printf("sum = %d\n", sum);

    return 0;
}

int add(int *a)
{
    int i = 0, sum = 0;

    for(i = 0 ; i <= 3 ; i++)
    {
         printf(" add function : a[%d] = %d \n", i, a[i]);
         sum = sum + a[i];
    }

    return sum;     
}