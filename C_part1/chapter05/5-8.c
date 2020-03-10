#include <stdio.h>

int main ()
{
    int num1 =10, num2 = 10;
    int a, b;

    num1 = num1 + 1;
    a = num1;
    printf("%d %d \n", a, num1);

    b = num2;
    num2 = num2 + 1;
    printf("%d %d \n", b, num2);

    return 0;
}