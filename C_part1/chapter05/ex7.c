#include <stdio.h>

int main ()
{
    int binary = 0, decimal = 0;

    printf("2진수 입력: ");
    scanf("%d", &binary);

    decimal = (binary % 10000)/1000*8 + (binary % 1000)/100*4 + (binary % 100)/10*2 + (binary % 10)/1*1;

    printf("%d\n", decimal);

    return 0;
}