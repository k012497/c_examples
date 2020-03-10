#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0;

    while(1)
    {
        while(1)
        {
            printf("첫 번째 수를 입력해주세요 : ");
            scanf("%d", &num1);
            if(num1 >= 1 && num1 <= 100)
            {
                break;
            }
            else if(num1 == -1)
            {
                goto EXIT;
            }
        }

        for(;1;)
        {
            printf("두 번째 수를 입력해주세요 : ");
            scanf("%d", &num2);
            if(num2 >= 1 && num2 <= 100)
            {
                break;
            }
            else if(num1 == -1)
            {
                goto EXIT;
            }
        }

        printf("%d + %d = %d입니다.\n", num1, num2, num1 + num2);
        //if(num1 == -1 || num2 == -1) break;
    }

    EXIT:
    return 0;
}
