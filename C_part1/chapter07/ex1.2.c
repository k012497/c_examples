#include <stdio.h>

int main()
{
    int num = 0, i = 0, count = 0;

    do
    {
        printf("1~100사이의 임의의 양수 입력");
        scanf("%d", &num);
    } while (num < 0 || num > 100);

    for ( i = 1 ; i < 100 ; i++)
    {
        if(num * i >= 100)
        {
            break;
        }
        printf("%d의 배수 : %d\n", num, num * i);
        count++;
    }

    printf("%d의 배수의 개수 : %d\n", num, count);

    return 0;
}
