#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, flag = 0;

    for ( ; ; )
    {
        do
        {
            printf("1~100 첫 번째 수 입력 : ");
            scanf("%d", &num1);
            printf("1~100 첫 번째 수 입력 : ");
            scanf("%d", &num2);

            if(num1 == -1 && num2 ==-1)
            {
                flag = 1;
                break;
            }
        } while ((num1 < 0 || num1 > 100) || (num2 < 0 || num2 >100));

        if(flag == 1) break;
        printf("%d + %d = %d입니다.\n", num1, num2, num1 + num2);
        
    }
    
    return 0;
}
