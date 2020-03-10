#include <stdio.h>

int main()
{
    int num = 0, digit1 = 0, digit2 = 0, digit3 = 0;

    printf("세 자리 십진수를 입력하세요 : ");
    scanf("%d", &num);

    digit1 = num % 10;
    digit2 = num/10 % 10;
    digit3 = num/100 % 10;


    if ( digit1 % 2 == 0)
        printf("%d : 짝수 ", digit1 );
    else 
        printf("%d : 홀수 ", digit1 );

    if (digit2 % 2 == 0)
        printf("%d : 짝수 ", digit2);
    else 
        printf("%d : 홀수 ", digit2);

    if (digit3 % 2 == 0)
        printf("%d : 짝수 ", digit3);
    else
        printf("%d : 홀수 ", digit3);

    printf("\n");

    return 0;
}
