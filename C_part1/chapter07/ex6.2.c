#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, flag = 0;

        for ( ;1; )
        {
            do
            {
                printf("첫 번째 수 입력 : ");
                scanf("%d", &num1);

                printf("두 번째 수 입력 : ");
                scanf("%d", &num2);
        
                if(num1 == -1 && num2 == -1)
                {
                    flag = 1;
                    break;
                }

            } while ((num1 < 1 || num1 > 100) || (num2 < 1 || num2 > 100));

            if(flag == 1) break;
            printf("두 수의 합 : %d\n", num1 + num2);
        }
    
    
    return 0;
}
