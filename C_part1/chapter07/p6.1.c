#include <stdio.h>

int main()
{
    int num1 = 0, num2 = 0, flag = 0;
    char operation ;

    printf("*************\n");
    printf("A---Add\n");
    printf("S---Subtract\n");
    printf("M---Multiply\n");
    printf("D---Divide\n");
    printf("Q---Quit\n");
    printf("*************\n");


    while(1)
    {
        do
        {          
            printf("연산을 선택하시오 : ");
            scanf("%c", &operation);
            while(getchar()!='\n');

            if(operation == 'Q')
            {
                flag = 1;
                break;
            }
        } while ((operation != 'A') && (operation != 'S') && (operation != 'M') && (operation != 'D'));

        if (flag == 1) break;

        while(1)
        {
            printf("1~100 사이의 두 수를 공백으로 분리하여 입력하시오 : ");
            scanf("%d %d", &num1, &num2);
            while(getchar()!='\n');
            if((num1 >= 1 && num1 <= 100) && (num2 >= 1 && num2 <= 100)) break;
        }
        
        if(operation == 'A')
        {
            printf("연산의 결과는 %d입니다.\n", num1 + num2);
        }
        else if(operation == 'S')
        {
            printf("연산의 결과는 %d입니다.\n", num1 - num2);
        }
        else if(operation == 'M')
        {
            printf("연산의 결과는 %d입니다.\n", num1 * num2);
        }
        else if(operation == 'D')
        {
            printf("연산의 결과는 %d입니다.\n", num1 / num2);
        }
        
    }
    return 0;
}
