#include <stdio.h>

int main ()
{
    int num1 = 0, num2 = 0;

    printf("정수를 입력하시오 : ");
    scanf("%d", &num1);

    printf("2를 곱하고 싶은 횟수 : ");
    scanf("%d", &num2);

    printf("%d<<%d의 값 : %d\n : ", num1, num2, num1<<num2);
    
    return 0;
    
}