#include <stdio.h>

int main()
{
    int num = 0, multiple = 0, count = 1; 

    for (;1;)
    {
        printf("1 ~ 10 중 하나 선택 ");
        scanf("%d", &num);
        if(num>=1 && num <=10) break;
    }

    printf("%d의 배수 : ", num);

    for (;1;)
    {
        multiple = num * count;
        printf("%d ", multiple);

        if (multiple > (100 - num))
        {
            printf("\n");
            break;
        }
        count++; 
    }

    printf("%d의 배수 개수 : %d\n", num, count);
    return 0;
}
