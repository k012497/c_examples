#include <stdio.h>

int main()
{
    int num1, num2, num3=0;
    int biggest = 0;

    printf("3개의 정수를 입력하시오 : ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    biggest = ( num1>num2? (num1>num3? num1 : num3) : (num2>num3? num2: num3) );
    printf("최대값: %d\n", biggest);

    return 0;
}