#include <stdio.h>
int main ()
{
    int num1 = 0;
    int num2 = 1;

    printf("num1의 값은 %d입니다. \n", num1);
    printf("num2의 값은 %d입니다. \n", num2);

    num1 = num1 + 10;
    num2 = num2 + 10;

    printf("num1의 값은 %d입니다. \n", num1);
    printf("num2의 값은 %d입니다. \n", num2);

    return 0;
}