#include <stdio.h>

int main ()
{
    int num1 = 3;
    int num2 = 4;

    printf("num1의 값 : %d\n", num1);
    printf("num2의 값 : %d\n", num2);

    printf("변수 num1의 시작 주소: %x\n", &num1);
    printf("변수 num2의 시작 주소: %x\n", &num2);

    return 0;
}