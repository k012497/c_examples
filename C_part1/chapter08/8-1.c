#include <stdio.h>

int main()
{
    int num1 = 0;

    printf("정수를 입력");
    scanf("%d", &num1);

    if (num1 >= 0)
    {
        printf("양수입니다.\n");
    }
    else
    {
        printf("음수입니다.\n");
    }
    

    return 0;
}
