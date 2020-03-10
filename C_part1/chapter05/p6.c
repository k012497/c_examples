#include <stdio.h>

int main ()
{
    int num1= 0;
    int complement = 0;
    
    printf("정수를 입력하시오: ");
    scanf("%d", &num1);

    complement = ~num1;

    printf("2의 보수: %d\n", complement);

    return 0;
}