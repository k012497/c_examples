#include <stdio.h>

int main ()
{
    int num1 = 10;
    int num2 = 20;
    int temp = 0;

    printf("x=%d y=%d\n", num1, num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("x=%d y=%d\n", num1, num2);

    return 0;
}