#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, num3 = 0, biggest = 0;

    for(;;)
    {
        printf("input : ");
        scanf("%d", &num1);
        printf("input : ");
        scanf("%d", &num2);
        printf("input : ");
        scanf("%d", &num3);

        if (num1 == 0 && num2 == 0 && num3 == 0)
            break;
        else if(num1 > num2 && num1 > num3)
            biggest = num1;
        else if(num2 > num1 && num2 > num3)
            biggest = num2;
        else if(num3 > num1 && num3 > num2)
            biggest = num3;

        printf("result : %d\n", biggest);
    }

    
    return 0;
}
