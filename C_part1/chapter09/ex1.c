#include <stdio.h>

int abs(int a);
int input_data(void);

int main()
{
    int num = 0;

    num = input_data();
    printf("절대값은 %d입니다.\n", abs(num));

    return 0;
}

int abs(int a)
{
    int b = 0;
    b = -a;
    return b;
}
int input_data(void)
{
    int num = 1000;
    for ( ; num < -100 || num > 100 ; )
    {
        printf("정수 입력");
        scanf("%d", &num);
    }
    return num;  
}