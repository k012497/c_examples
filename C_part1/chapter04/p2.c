#include <stdio.h>

int main ()
{
    int num1 = 0;

    printf("16진수 정수를 입력하시오: ");
    scanf("%x", &num1);

    printf("8진수로는 %o입니다.\n", num1);
    printf("10진수로는 %d입니다.\n", num1);
    printf("16진수로는 0x%x입니다.\n", num1);

    return 0;
    
}