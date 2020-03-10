#include <stdio.h>

int main()
{
    int num = 0, i = 0, reverse = 0;
    
    do
    {
        if(num < 0)
        {
            printf("경고 ! 양의 ");
        }
    
        printf("정수를 입력하시오: ");
        scanf("%d", &num);
    }while(num < 0);

    for(i = 1; i <= num ; i = i*10)
    {
       reverse = (num / i) % 10;
       printf("%d", reverse);
    }
    
    printf("\n");

    return 0;
}
