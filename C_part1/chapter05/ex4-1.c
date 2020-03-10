#include <stdio.h>

int main()
{
    int num1=0, num2=0, num3=0, max1=0, max2=0;
    
    printf("첫 번째 정수 입력:");
    fflush(stdout);
    fflush(stdin);
    scanf("%d", &num1);

    printf("두 번째 정수 입력:");
    fflush(stdout);
    fflush(stdin);
    scanf("%d", &num2);
    
    printf("세 번째 정수 입력:");
    fflush(stdout);
    fflush(stdin);
    scanf("%d", &num3);

    max1 = num1>num2 ? num1 : num2;
    max2 = max1>num3 ? max1 : num3;

    /*
    if (num1 > num2)
    {
        max1 = num1;
    }
    else
    {
        max1 = num2;
    }
    
    if (num1 > num3)
    {
        max2 = num1;
    }
    else
    {
        max2 = num3;
    }
    */

    printf("가장 큰 수 : %d\n", max2);

    return 0;
}