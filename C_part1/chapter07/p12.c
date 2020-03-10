#include <stdio.h>

int main()
{
    long int num = 0, num1 = 0, num2 = 1, num3 = 0, i = 0;

    printf("몇 번째 항까지 구할까요?");
    scanf("%ld", &num);
    
    printf("%ld ", num1);
    printf("%ld ", num2);

    for ( i = 0; i < num - 2 ; i++)
    {
        num3 = num1 + num2;
        printf("%ld ", num3);
        num1 = num2;
        num2 = num3;
    }

    printf("\n");
    
    return 0;
}
