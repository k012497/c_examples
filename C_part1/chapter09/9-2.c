#include <stdio.h>

int min(int a, int b);
int max(int a, int b);
int input_data(int a);

int main()
{
    int num1 = 0, num2 = 0, i = 0, j = 0;

    num1 = input_data(1);
    num2 = input_data(2);
    i = max(num1, num2);
    j = min(num1, num2);

    printf("%d, %d 중 큰 수는 %d, 작은 수는 %d입니다.\n", num1, num2, i, j);

    return 0;
}

int min(int a, int b)
{
    if (a<b)
        return a;
    else if (a>b)
        return b;
}

int max(int a, int b)
{
    if (a>b)
        return a;
    else if (a<b)
        return b;
}

int input_data(int a)
{
    int num = 0;
    for ( ; (num < 1 || num > 100) ; )
    {
        printf("%d번째 숫자 입력", a);
        scanf("%d", &num);
    }
    return num;
}
