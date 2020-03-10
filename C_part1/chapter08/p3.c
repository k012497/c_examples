#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, smallest = 0;

    for(;;)
    {
        printf("3개의 정수를 입력하시오 : ");
        scanf("%d %d %d", &num1, &num2, &num3);


        if (num1 == 0 && num2 == 0 && num3 == 0)
            break;
        else if(num1 < num2 && num1 < num3)
            smallest = num1;
        else if(num2 < num1 && num2 < num3)
            smallest = num2;
        else if(num3 < num1 && num3 < num2)
            smallest = num3;

        printf("가장 작은 정수 : %d\n", smallest);
    }

    
    return 0;
}
