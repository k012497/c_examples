#include <stdio.h>

int main()
{
    int num = 0, i = 0;

    printf("카운터의 초기 값을 입력하시오 : ");
    scanf("%d", &num);

    for ( i = num; i > 0; i--)
    {
        printf("%d ", i);
    }

    printf("\a\n");
    
    return 0;
}
