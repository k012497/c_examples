#include <stdio.h>

void input_value(void);
void sum(void);
void sum_print(void);
int num1, num2, result;//방탄소년단 bss 영역에 들어간다.

int main()
{
    int num1 = 0, num2 = 0, result = 0;
    input_value();
    input_value();
    
    sum();
    sum_print();

    return 0;
}


void input_value(void)
{
    
    /*
    do
    {
        printf("%d번째 1~100 정수 입력", a);
        scanf("%d", &num);
    } while (num<1 || num>100);
     */

    for ( ; (num1<1 || num1>100) ||(num2<1 || num2>100) ; )
    {
        printf("1~100 정수 2ro 입력");
        scanf("%d %d", &num1, &num2);
    }
    
    return ;
}//1. 두 수를 입력받는 함수 

void sum(void)
{
    result = num1 + num2;
    return ;
}//2.합계를 구하는 함수

void sum_print(void)
{
    printf("%d + %d = %d입니다.\n", num1, num2, result);
    return ;
}//3.합계를 출력하는 함수