#include <stdio.h>

int main()
{
    int dan = 0, i = 0, j = 0;

    do
    {
        printf("1~9 숫자를 입력하세요");
        scanf("%d", &dan);
    } while (dan < 0 || dan > 10);
    
    for( i = dan ; i >= 1 ; i--)
    {
        printf("==============\n");

        for ( j = 1 ; j < 10; j++)
        {
            printf("%d * %d = %d\n", i, j, i * j);
        }   
    }
    return 0;
}
